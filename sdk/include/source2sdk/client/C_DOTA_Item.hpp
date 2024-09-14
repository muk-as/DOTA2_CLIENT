#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x678
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
    // static metadata: MNetworkVarNames "bool m_bCanBeConsumed"
    // static metadata: MNetworkVarNames "int m_iValuelessCharges"
    // static metadata: MNetworkVarNames "int m_iCurrentCharges"
    // static metadata: MNetworkVarNames "int m_iSecondaryCharges"
    // static metadata: MNetworkVarNames "int m_iMaxCharges"
    // static metadata: MNetworkVarNames "bool m_bCombineLocked"
    // static metadata: MNetworkVarNames "GameTime_t m_flPurchaseTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flAssembledTime"
    // static metadata: MNetworkVarNames "bool m_bPurchasedWhileDead"
    // static metadata: MNetworkVarNames "bool m_bCanBeUsedOutOfInventory"
    // static metadata: MNetworkVarNames "bool m_bItemEnabled"
    // static metadata: MNetworkVarNames "GameTime_t m_flEnableTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flReclaimTime"
    // static metadata: MNetworkVarNames "bool m_bDisplayOwnership"
    // static metadata: MNetworkVarNames "bool m_bShowOnMinimap"
    // static metadata: MNetworkVarNames "float m_flMinimapIconSize"
    // static metadata: MNetworkVarNames "bool m_bIsUpgradeable"
    // static metadata: MNetworkVarNames "int m_nUpgradeProgress"
    // static metadata: MNetworkVarNames "int m_nUpgradeGoal"
    // static metadata: MNetworkVarNames "PlayerID_t m_iPlayerOwnerID"
    // static metadata: MNetworkVarNames "uint8 m_vecPreGameTransferPlayerIDs"
    #pragma pack(push, 1)
    class C_DOTA_Item : public client::C_DOTABaseAbility
    {
    public:
        int32_t m_CastAnimation; // 0x5d8        
        // metadata: MNetworkEnable
        bool m_bCombinable; // 0x5dc        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bPermanent; // 0x5dd        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bStackable; // 0x5de        
        [[maybe_unused]] std::uint8_t pad_0x5df[0x1]; // 0x5df
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iStackableMax; // 0x5e0        
        // metadata: MNetworkEnable
        bool m_bRecipe; // 0x5e4        
        // metadata: MNetworkEnable
        bool m_bRecipeConsumesCharges; // 0x5e5        
        [[maybe_unused]] std::uint8_t pad_0x5e6[0x2]; // 0x5e6
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iSharability; // 0x5e8        
        // metadata: MNetworkEnable
        bool m_bDroppable; // 0x5ec        
        // metadata: MNetworkEnable
        bool m_bPurchasable; // 0x5ed        
        // metadata: MNetworkEnable
        bool m_bSellable; // 0x5ee        
        // metadata: MNetworkEnable
        bool m_bInitiallySellable; // 0x5ef        
        // metadata: MNetworkEnable
        bool m_bForceUnsellable; // 0x5f0        
        // metadata: MNetworkEnable
        bool m_bRequiresCharges; // 0x5f1        
        bool m_bDisplayCharges; // 0x5f2        
        bool m_bHideCharges; // 0x5f3        
        // metadata: MNetworkEnable
        bool m_bKillable; // 0x5f4        
        // metadata: MNetworkEnable
        bool m_bGloballyCombinable; // 0x5f5        
        // metadata: MNetworkEnable
        bool m_bDisassemblable; // 0x5f6        
        // metadata: MNetworkEnable
        bool m_bNeverDisassemble; // 0x5f7        
        // metadata: MNetworkEnable
        bool m_bIsNeutralDrop; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5f9[0x3]; // 0x5f9
        // metadata: MNetworkEnable
        int32_t m_nNeutralDropTeam; // 0x5fc        
        // metadata: MNetworkEnable
        bool m_bAlertable; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x601[0x3]; // 0x601
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iInitialCharges; // 0x604        
        // metadata: MNetworkEnable
        bool m_bCastOnPickup; // 0x608        
        // metadata: MNetworkEnable
        bool m_bOnlyPlayerHeroPickup; // 0x609        
        // metadata: MNetworkEnable
        bool m_bCreepHeroPickup; // 0x60a        
        // metadata: MNetworkEnable
        bool m_bCanBeConsumed; // 0x60b        
        // metadata: MNetworkEnable
        int32_t m_iValuelessCharges; // 0x60c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iCurrentCharges; // 0x610        
        // metadata: MNetworkEnable
        int32_t m_iSecondaryCharges; // 0x614        
        // metadata: MNetworkEnable
        int32_t m_iMaxCharges; // 0x618        
        // metadata: MNetworkEnable
        bool m_bCombineLocked; // 0x61c        
        [[maybe_unused]] std::uint8_t pad_0x61d[0x3]; // 0x61d
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flPurchaseTime; // 0x620        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flAssembledTime; // 0x624        
        // metadata: MNetworkEnable
        bool m_bPurchasedWhileDead; // 0x628        
        // metadata: MNetworkEnable
        bool m_bCanBeUsedOutOfInventory; // 0x629        
        // metadata: MNetworkEnable
        bool m_bItemEnabled; // 0x62a        
        [[maybe_unused]] std::uint8_t pad_0x62b[0x1]; // 0x62b
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flEnableTime; // 0x62c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flReclaimTime; // 0x630        
        // metadata: MNetworkEnable
        bool m_bDisplayOwnership; // 0x634        
        // metadata: MNetworkEnable
        bool m_bShowOnMinimap; // 0x635        
        [[maybe_unused]] std::uint8_t pad_0x636[0x2]; // 0x636
        // metadata: MNetworkEnable
        float m_flMinimapIconSize; // 0x638        
        // metadata: MNetworkEnable
        bool m_bIsUpgradeable; // 0x63c        
        [[maybe_unused]] std::uint8_t pad_0x63d[0x3]; // 0x63d
        // metadata: MNetworkEnable
        int32_t m_nUpgradeProgress; // 0x640        
        // metadata: MNetworkEnable
        int32_t m_nUpgradeGoal; // 0x644        
        // m_hOldOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOldOwnerEntity;
        char m_hOldOwnerEntity[0x4]; // 0x648        
        int32_t m_iOldCharges; // 0x64c        
        // metadata: MNetworkEnable
        client::PlayerID_t m_iPlayerOwnerID; // 0x650        
        [[maybe_unused]] std::uint8_t pad_0x654[0x4]; // 0x654
        // metadata: MNetworkEnable
        // m_vecPreGameTransferPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<uint8_t> m_vecPreGameTransferPlayerIDs;
        char m_vecPreGameTransferPlayerIDs[0x18]; // 0x658        
        [[maybe_unused]] std::uint8_t pad_0x670[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item) == 0x678);
};
