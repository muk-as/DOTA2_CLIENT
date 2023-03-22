/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
const k_GameModes = [
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_AP, sName: "AllPick" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_TURBO, sName: "Turbo" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_SD, sName: "SingleDraft" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_RD, sName: "RandomDraft" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_AR, sName: "AllRandom" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_ABILITY_DRAFT, sName: "AbilityDraft" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_ARDM, sName: "AllRandomDeathMatch" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_EVENT, sName: "Event" },
];
const k_GameModesMap = ToMap(k_GameModes, mode => mode.nMode);
const k_StandardModes = [DOTA_GameMode.DOTA_GAMEMODE_AP, DOTA_GameMode.DOTA_GAMEMODE_TURBO];
const k_OtherModes = [DOTA_GameMode.DOTA_GAMEMODE_SD, DOTA_GameMode.DOTA_GAMEMODE_RD, DOTA_GameMode.DOTA_GAMEMODE_AR, DOTA_GameMode.DOTA_GAMEMODE_ABILITY_DRAFT, DOTA_GameMode.DOTA_GAMEMODE_ARDM];
let gFeaturedGamemodeDef = null;
function InitUnrankedGameModes() {
    const pContext = $.GetContextPanel();
    gFeaturedGamemodeDef = pContext.GetActiveFeaturedGamemode();
    const pModes = $("#UnrankedGameModes");
    if (pModes) {
        pModes.RemoveAndDeleteChildren();
        let bFeaturedModeFound = false;
        k_StandardModes.forEach(nMode => {
            if (gFeaturedGamemodeDef && nMode == gFeaturedGamemodeDef.eGameMode) {
                BuildUnrankedGameModePanel(pModes, nMode, gFeaturedGamemodeDef);
                bFeaturedModeFound = true;
            }
            else {
                BuildUnrankedGameModePanel(pModes, nMode);
            }
        });
        if (gFeaturedGamemodeDef && !bFeaturedModeFound) {
            BuildUnrankedGameModePanel(pModes, gFeaturedGamemodeDef.eGameMode, gFeaturedGamemodeDef);
        }
    }
    const pOtherModes = $("#UnrankedGameModesOther");
    if (pOtherModes) {
        pOtherModes.RemoveAndDeleteChildren();
        k_OtherModes.forEach(nMode => {
            const mode = k_GameModesMap[nMode];
            if (mode && (gFeaturedGamemodeDef == null || nMode != gFeaturedGamemodeDef.eGameMode)) {
                BuildGameModeToggle(pOtherModes, mode.sName, mode.nMode);
            }
        });
    }
    if (gFeaturedGamemodeDef) {
        pContext.SetDialogVariableInt("fgm_loss_shards", gFeaturedGamemodeDef.nShardsPerLoss);
        pContext.SetDialogVariableInt("fgm_win_bonus_shards", gFeaturedGamemodeDef.nShardsPerWin - gFeaturedGamemodeDef.nShardsPerLoss);
    }
    UpdateUnrankedValues();
    pContext.UpdateCasualGameModeCheckboxes();
}
$.Schedule(0.0, InitUnrankedGameModes);
function UpdateUnrankedGameModes() {
    const pContext = $.GetContextPanel();
    const pFeaturedGamemodeDef = pContext.GetActiveFeaturedGamemode();
    if (!BShallowEqual(pFeaturedGamemodeDef, gFeaturedGamemodeDef, "sLocalizedEndsIn")) {
        InitUnrankedGameModes();
    }
    else {
        if (gFeaturedGamemodeDef)
            gFeaturedGamemodeDef.sLocalizedEndsIn = pFeaturedGamemodeDef.sLocalizedEndsIn;
        UpdateUnrankedValues();
    }
}
function UpdateUnrankedValues() {
    const pContext = $.GetContextPanel();
    pContext.SetDialogVariableInt("fgm_shards_earned", pContext.GetFeaturedGamemodeProgress());
    pContext.SetDialogVariableInt("fgm_shards_max", pContext.GetFeaturedGamemodeMax());
    const pSection = $("#GameModeSection");
    const pModesPanel = $("#UnrankedGameModes");
    const pModesOtherPanel = $("#UnrankedGameModesOther");
    if (pSection && pModesPanel && pModesOtherPanel) {
        if (pContext.BHasClass("SectionVisible_Normal")) {
            if (pSection.BHasClass("ShowAll")) {
                pSection.SwitchClass("GameModeHeight", `GameModeHeight_${pModesPanel.GetChildCount()}_${pModesOtherPanel.GetChildCount()}`);
            }
            else {
                pSection.SwitchClass("GameModeHeight", `GameModeHeight_${pModesPanel.GetChildCount()}`);
            }
        }
        else {
            pSection.SwitchClass("GameModeHeight", "");
            pSection.style.height = null;
        }
    }
    if (gFeaturedGamemodeDef) {
        pContext.SetDialogVariable("ends_in_time", gFeaturedGamemodeDef.sLocalizedEndsIn);
    }
    const pShowAllCount = pContext.FindChildInLayoutFile("GameMode_ShowAll_Count");
    if (pShowAllCount) {
        const nSelectedGameModes = pContext.GetSelectedGameModes();
        let nSelectedOtherGameModeCount = 0;
        k_OtherModes.forEach(mode => {
            const bSelected = (1 << mode) & nSelectedGameModes;
            if (bSelected && (gFeaturedGamemodeDef == null || gFeaturedGamemodeDef.eGameMode != mode))
                nSelectedOtherGameModeCount++;
        });
        pShowAllCount.SetDialogVariableInt("unranked_other_selected_count", nSelectedOtherGameModeCount);
        pShowAllCount.SetHasClass("NoneSelected", nSelectedOtherGameModeCount == 0);
    }
}
function BShallowEqual(pObj1, pObj2, ...ignoreKeys) {
    if (pObj1 == null && pObj2 == null)
        return true;
    if (pObj1 == null || pObj2 == null)
        return false;
    for (const prop in pObj1) {
        if (!ignoreKeys.includes(prop) && pObj1[prop] !== pObj2[prop])
            return false;
    }
    return true;
}
function BuildGameModeToggle(pParent, sName, nMode, sLocText, sLocTooltip) {
    if (!sLocText)
        sLocText = `#game_mode_${nMode}`;
    if (!sLocTooltip)
        sLocTooltip = `#game_mode_${nMode}_desc`;
    const pToggleButton = $.CreatePanelWithProperties("ToggleButton", pParent, `GameMode_${sName}`, { class: "GameModeCheckBox", text: sLocText });
    pToggleButton.SetPanelEvent("onmouseover", () => $.DispatchEvent("UIShowTextTooltipStyled", pToggleButton, sLocTooltip, "GameModeTooltip"));
    pToggleButton.SetPanelEvent("onmouseout", () => $.DispatchEvent("UIHideTextTooltip", pToggleButton));
    pToggleButton.SetPanelEvent("onactivate", () => $.DispatchEvent("DOTAGameModeToggled", pToggleButton, "false"));
    return pToggleButton;
}
function BuildFeaturedGameModeDot(pParent, bFilled) {
    let className = "FeaturedGameModeDot";
    if (bFilled)
        className += " Filled";
    return $.CreatePanelWithProperties("Panel", pParent, undefined, { class: className });
}
function BuildUnrankedGameModePanel(pParent, nMode, pFeaturedGamemodeDef) {
    const mode = k_GameModesMap[nMode];
    if (!mode)
        return null;
    const pGameModeContainer = $.CreatePanel("Panel", pParent, `GameModeContainer_${mode.sName}`);
    pGameModeContainer.BLoadLayoutSnippet("UnrankedGameModeContainer");
    if (pFeaturedGamemodeDef) {
        pGameModeContainer.AddClass("FeaturedGameMode");
        if (pFeaturedGamemodeDef.sCustomGame) {
            pGameModeContainer.AddClass(pFeaturedGamemodeDef.sCustomGame);
        }
    }
    const pFeaturedGameModeHeader = pGameModeContainer.FindChildInLayoutFile("FeaturedGameModeHeader");
    if (pFeaturedGameModeHeader) {
        let pGameModeToggle;
        if (pFeaturedGamemodeDef)
            pGameModeToggle = BuildGameModeToggle(pGameModeContainer, mode.sName, mode.nMode, pFeaturedGamemodeDef.sLocName, pFeaturedGamemodeDef.sLocDescription);
        else
            pGameModeToggle = BuildGameModeToggle(pGameModeContainer, mode.sName, mode.nMode);
        pGameModeContainer.MoveChildAfter(pGameModeToggle, pFeaturedGameModeHeader);
    }
    return pGameModeContainer;
}
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicGxheS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbInBsYXkudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEsa0NBQWtDO0FBQ2xDLGdDQUFnQztBQTRCaEMsTUFBTSxXQUFXLEdBQWU7SUFDNUIsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLGdCQUFnQixFQUFFLEtBQUssRUFBRSxTQUFTLEVBQUU7SUFDM0QsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLG1CQUFtQixFQUFFLEtBQUssRUFBRSxPQUFPLEVBQUU7SUFDNUQsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLGdCQUFnQixFQUFFLEtBQUssRUFBRSxhQUFhLEVBQUU7SUFDL0QsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLGdCQUFnQixFQUFFLEtBQUssRUFBRSxhQUFhLEVBQUU7SUFDL0QsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLGdCQUFnQixFQUFFLEtBQUssRUFBRSxXQUFXLEVBQUU7SUFDN0QsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLDJCQUEyQixFQUFFLEtBQUssRUFBRSxjQUFjLEVBQUU7SUFDM0UsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLGtCQUFrQixFQUFFLEtBQUssRUFBRSxxQkFBcUIsRUFBRTtJQUN6RSxFQUFFLEtBQUssRUFBRSxhQUFhLENBQUMsbUJBQW1CLEVBQUUsS0FBSyxFQUFFLE9BQU8sRUFBRTtDQUMvRCxDQUFDO0FBQ0YsTUFBTSxjQUFjLEdBQUcsS0FBSyxDQUFFLFdBQVcsRUFBRSxJQUFJLENBQUMsRUFBRSxDQUFDLElBQUksQ0FBQyxLQUFLLENBQUUsQ0FBQztBQUNoRSxNQUFNLGVBQWUsR0FBRyxDQUFDLGFBQWEsQ0FBQyxnQkFBZ0IsRUFBRSxhQUFhLENBQUMsbUJBQW1CLENBQUMsQ0FBQztBQUM1RixNQUFNLFlBQVksR0FBRyxDQUFDLGFBQWEsQ0FBQyxnQkFBZ0IsRUFBRSxhQUFhLENBQUMsZ0JBQWdCLEVBQUUsYUFBYSxDQUFDLGdCQUFn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