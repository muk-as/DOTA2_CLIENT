#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_Item_Physical;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x648
    // Has VTable
    // Is Abstract
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bCombinable"
    // static metadata: MNetworkVarNames "bool m_bPermanent"
    // static metadata: MNetworkVarNames "bool m_bStackable"
    // static metadata: MNetworkVarNames "int m_iStackableMax"
    // static metadata: MNetworkVarNames "bool m_bRecipe"
    // static metadata: MNetworkVarNames "bool m_bRecipeConsumesCharges"
    // static metadata: MNetworkVarNames "int m_iSharability"
    // static metadata: MNetworkVarNames "bool m_bDroppable"
    // static metadata: MNetworkVarNames "bool m_bPurchasable"
    // static metadata: MNetworkVarNames "bool m_bSellable"
    // static metadata: MNetworkVarNames "bool m_bInitiallySellable"
    // static metadata: MNetworkVarNames "bool m_bForceUnsellable"
    // static metadata: MNetworkVarNames "bool m_bRequiresCharges"
    // static metadata: MNetworkVarNames "bool m_bKillable"
    // static metadata: MNetworkVarNames "bool m_bGloballyCombinable"
    // static metadata: MNetworkVarNames "bool m_bDisassemblable"
    // static metadata: MNetworkVarNames "bool m_bNeverDisassemble"
    // static metadata: MNetworkVarNames "bool m_bIsNeutralDrop"
    // static metadata: MNetworkVarNames "int m_nNeutralDropTeam"
    // static metadata: MNetworkVarNames "bool m_bAlertable"
    // static metadata: MNetworkVarNames "int m_iInitialCharges"
    // static metadata: MNetworkVarNames "bool m_bCastOnPickup"
    // static metadata: MNetworkVarNames "bool m_bOnlyPlayerHeroPickup"
    // static metadata: MNetworkVarNames "bool m_bCreepHeroPickup"
    // static metadata: MNetworkVarNames "bool m_bCanBeUsedOutOfInventory"
    // static metadata: MNetworkVarNames "bool m_bItemEnabled"
    // static metadata: MNetworkVarNames "GameTime_t m_flEnableTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flReclaimTime"
    // static metadata: MNetworkVarNames "bool m_bCanBeConsumed"
    // static metadata: MNetworkVarNames "bool m_bDisplayOwnership"
    // static metadata: MNetworkVarNames "bool m_bShowOnMinimap"
    // static metadata: MNetworkVarNames "float m_flMinimapIconSize"
    // static metadata: MNetworkVarNames "bool m_bIsUpgradeable"
    // static metadata: MNetworkVarNames "int m_nUpgradeProgress"
    // static metadata: MNetworkVarNames "int m_nUpgradeGoal"
    // static metadata: MNetworkVarNames "uint8 m_vecPreGameTransferPlayerIDs"
    // static metadata: MNetworkVarNames "GameTime_t m_flPurchaseTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flAssembledTime"
    // static metadata: MNetworkVarNames "int m_iCurrentCharges"
    // static metadata: MNetworkVarNames "int m_iValuelessCharges"
    // static metadata: MNetworkVarNames "int m_iSecondaryCharges"
    // static metadata: MNetworkVarNames "bool m_bCombineLocked"
    // static metadata: MNetworkVarNames "PlayerID_t m_iPlayerOwnerID"
    // static metadata: MNetworkVarNames "bool m_bPurchasedWhileDead"
    #pragma pack(push, 1)
    class CDOTA_Item : public server::CDOTABaseAbility
    {
    public:
        int32_t m_iState; // 0x5a0        
        int32_t m_CastAnimation; // 0x5a4        
        // metadata: MNetworkEnable
        bool m_bCombinable; // 0x5a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bPermanent; // 0x5a9        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bStackable; // 0x5aa        
        [[maybe_unused]] std::uint8_t pad_0x5ab[0x1]; // 0x5ab
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iStackableMax; // 0x5ac        
        // metadata: MNetworkEnable
        bool m_bRecipe; // 0x5b0        
        // metadata: MNetworkEnable
        bool m_bRecipeConsumesCharges; // 0x5b1        
        [[maybe_unused]] std::uint8_t pad_0x5b2[0x2]; // 0x5b2
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iSharability; // 0x5b4        
        // metadata: MNetworkEnable
        bool m_bDroppable; // 0x5b8        
        // metadata: MNetworkEnable
        bool m_bPurchasable; // 0x5b9        
        // metadata: MNetworkEnable
        bool m_bSellable; // 0x5ba        
        // metadata: MNetworkEnable
        bool m_bInitiallySellable; // 0x5bb        
        // metadata: MNetworkEnable
        bool m_bForceUnsellable; // 0x5bc        
        // metadata: MNetworkEnable
        bool m_bRequiresCharges; // 0x5bd        
        // metadata: MNetworkEnable
        bool m_bKillable; // 0x5be        
        // metadata: MNetworkEnable
        bool m_bGloballyCombinable; // 0x5bf        
        // metadata: MNetworkEnable
        bool m_bDisassemblable; // 0x5c0        
        // metadata: MNetworkEnable
        bool m_bNeverDisassemble; // 0x5c1        
        bool m_bIsTempestDoubleClonable; // 0x5c2        
        // metadata: MNetworkEnable
        bool m_bIsNeutralDrop; // 0x5c3        
        // metadata: MNetworkEnable
        int32_t m_nNeutralDropTeam; // 0x5c4        
        // metadata: MNetworkEnable
        bool m_bAlertable; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5c9[0x3]; // 0x5c9
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iInitialCharges; // 0x5cc        
        // metadata: MNetworkEnable
        bool m_bCastOnPickup; // 0x5d0        
        // metadata: MNetworkEnable
        bool m_bOnlyPlayerHeroPickup; // 0x5d1        
        // metadata: MNetworkEnable
        bool m_bCreepHeroPickup; // 0x5d2        
        // metadata: MNetworkEnable
        bool m_bCanBeUsedOutOfInventory; // 0x5d3        
        // metadata: MNetworkEnable
        bool m_bItemEnabled; // 0x5d4        
        [[maybe_unused]] std::uint8_t pad_0x5d5[0x3]; // 0x5d5
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flEnableTime; // 0x5d8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flReclaimTime; // 0x5dc        
        // metadata: MNetworkEnable
        bool m_bCanBeConsumed; // 0x5e0        
        // metadata: MNetworkEnable
        bool m_bDisplayOwnership; // 0x5e1        
        // metadata: MNetworkEnable
        bool m_bShowOnMinimap; // 0x5e2        
        [[maybe_unused]] std::uint8_t pad_0x5e3[0x1]; // 0x5e3
        // metadata: MNetworkEnable
        float m_flMinimapIconSize; // 0x5e4        
        // metadata: MNetworkEnable
        bool m_bIsUpgradeable; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5e9[0x3]; // 0x5e9
        // metadata: MNetworkEnable
        int32_t m_nUpgradeProgress; // 0x5ec        
        // metadata: MNetworkEnable
        int32_t m_nUpgradeGoal; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f4[0x4]; // 0x5f4
        // metadata: MNetworkEnable
        // m_vecPreGameTransferPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<uint8_t> m_vecPreGameTransferPlayerIDs;
        char m_vecPreGameTransferPlayerIDs[0x18]; // 0x5f8        
        bool m_bStackWithOtherOwners; // 0x610        
        bool m_bTemporarilyUncombinable; // 0x611        
        bool m_bHasCommentedOnEquip; // 0x612        
        [[maybe_unused]] std::uint8_t pad_0x613[0x1]; // 0x613
        int32_t m_iDeclarationFlags; // 0x614        
        bool m_bCreatedByDisassemble; // 0x618        
        bool m_bHasMixedOwnership; // 0x619        
        bool m_bIsClonedItemProxy; // 0x61a        
        bool m_bNeutralItemRequestDrop; // 0x61b        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flPurchaseTime; // 0x61c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flAssembledTime; // 0x620        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iCurrentCharges; // 0x624        
        // metadata: MNetworkEnable
        int32_t m_iValuelessCharges; // 0x628        
        // metadata: MNetworkEnable
        int32_t m_iSecondaryCharges; // 0x62c        
        // metadata: MNetworkEnable
        bool m_bCombineLocked; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x631[0x3]; // 0x631
        // m_hContainer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_Item_Physical> m_hContainer;
        char m_hContainer[0x4]; // 0x634        
        // metadata: MNetworkEnable
        client::PlayerID_t m_iPlayerOwnerID; // 0x638        
        // metadata: MNetworkEnable
        bool m_bPurchasedWhileDead; // 0x63c        
        [[maybe_unused]] std::uint8_t pad_0x63d[0x3]; // 0x63d
        int32_t m_nCombineVersion; // 0x640        
        [[maybe_unused]] std::uint8_t pad_0x644[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item) == 0x648);
};
