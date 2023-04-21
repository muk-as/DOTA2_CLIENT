/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
const k_GameModes = [
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_AP, sName: "AllPick" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_TURBO, sName: "Turbo" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_SD, sName: "SingleDraft" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_RD, sName: "RandomDraft" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_ABILITY_DRAFT, sName: "AbilityDraft" },
    { nMode: DOTA_GameMode.DOTA_GAMEMODE_EVENT, sName: "Event" },
];
const k_GameModesMap = ToMap(k_GameModes, mode => mode.nMode);
const k_StandardModes = [DOTA_GameMode.DOTA_GAMEMODE_AP, DOTA_GameMode.DOTA_GAMEMODE_TURBO];
const k_OtherModes = [DOTA_GameMode.DOTA_GAMEMODE_SD, DOTA_GameMode.DOTA_GAMEMODE_RD, DOTA_GameMode.DOTA_GAMEMODE_ABILITY_DRAFT];
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
//# sourceMappingURL=data:application/json;base64,eyJ2ZXJzaW9uIjozLCJmaWxlIjoicGxheS5qcyIsInNvdXJjZVJvb3QiOiIiLCJzb3VyY2VzIjpbInBsYXkudHMiXSwibmFtZXMiOltdLCJtYXBwaW5ncyI6IkFBQUEsa0NBQWtDO0FBQ2xDLGdDQUFnQztBQTRCaEMsTUFBTSxXQUFXLEdBQWU7SUFDNUIsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLGdCQUFnQixFQUFFLEtBQUssRUFBRSxTQUFTLEVBQUU7SUFDM0QsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLG1CQUFtQixFQUFFLEtBQUssRUFBRSxPQUFPLEVBQUU7SUFDNUQsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLGdCQUFnQixFQUFFLEtBQUssRUFBRSxhQUFhLEVBQUU7SUFDL0QsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLGdCQUFnQixFQUFFLEtBQUssRUFBRSxhQUFhLEVBQUU7SUFDL0QsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLDJCQUEyQixFQUFFLEtBQUssRUFBRSxjQUFjLEVBQUU7SUFDM0UsRUFBRSxLQUFLLEVBQUUsYUFBYSxDQUFDLG1CQUFtQixFQUFFLEtBQUssRUFBRSxPQUFPLEVBQUU7Q0FDL0QsQ0FBQztBQUNGLE1BQU0sY0FBYyxHQUFHLEtBQUssQ0FBRSxXQUFXLEVBQUUsSUFBSSxDQUFDLEVBQUUsQ0FBQyxJQUFJLENBQUMsS0FBSyxDQUFFLENBQUM7QUFDaEUsTUFBTSxlQUFlLEdBQUcsQ0FBQyxhQUFhLENBQUMsZ0JBQWdCLEVBQUUsYUFBYSxDQUFDLG1CQUFtQixDQUFDLENBQUM7QUFDNUYsTUFBTSxZQUFZLEdBQUcsQ0FBQyxhQUFhLENBQUMsZ0JBQWdCLEVBQUUsYUFBYSxDQUFDLGdCQUFnQixFQUFFLGFBQWEsQ0FBQywyQkFBMkIsQ0FBQyxDQUFDO0FBRWpJLElBQUksb0JBQW9CLEdBQTJDLElBQUksQ0FBQztBQUV4RSxTQUFTLHFCQUFxQjtJQUUxQixNQUFNLFFBQVEsR0FBRyxDQUFDLENBQUMsZUFBZSxFQUFnQyxDQUFDO0lBQ25FLG9CQUFvQixHQUFH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