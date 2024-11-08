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
    // Size: 0x6a0
    // Has VTable
    // Is Abstract
    // MClassHasEntityLimitedDataDesc
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
        int32_t m_CastAnimation; // 0x600        
        // metadata: MNetworkEnable
        bool m_bCombinable; // 0x604        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bPermanent; // 0x605        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        bool m_bStackable; // 0x606        
        [[maybe_unused]] std::uint8_t pad_0x607[0x1]; // 0x607
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iStackableMax; // 0x608        
        // metadata: MNetworkEnable
        bool m_bRecipe; // 0x60c        
        // metadata: MNetworkEnable
        bool m_bRecipeConsumesCharges; // 0x60d        
        [[maybe_unused]] std::uint8_t pad_0x60e[0x2]; // 0x60e
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iSharability; // 0x610        
        // metadata: MNetworkEnable
        bool m_bDroppable; // 0x614        
        // metadata: MNetworkEnable
        bool m_bPurchasable; // 0x615        
        // metadata: MNetworkEnable
        bool m_bSellable; // 0x616        
        // metadata: MNetworkEnable
        bool m_bInitiallySellable; // 0x617        
        // metadata: MNetworkEnable
        bool m_bForceUnsellable; // 0x618        
        // metadata: MNetworkEnable
        bool m_bRequiresCharges; // 0x619        
        bool m_bDisplayCharges; // 0x61a        
        bool m_bHideCharges; // 0x61b        
        // metadata: MNetworkEnable
        bool m_bKillable; // 0x61c        
        // metadata: MNetworkEnable
        bool m_bGloballyCombinable; // 0x61d        
        // metadata: MNetworkEnable
        bool m_bDisassemblable; // 0x61e        
        // metadata: MNetworkEnable
        bool m_bNeverDisassemble; // 0x61f        
        // metadata: MNetworkEnable
        bool m_bIsNeutralDrop; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x621[0x3]; // 0x621
        // metadata: MNetworkEnable
        int32_t m_nNeutralDropTeam; // 0x624        
        // metadata: MNetworkEnable
        bool m_bAlertable; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x629[0x3]; // 0x629
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iInitialCharges; // 0x62c        
        // metadata: MNetworkEnable
        bool m_bCastOnPickup; // 0x630        
        // metadata: MNetworkEnable
        bool m_bOnlyPlayerHeroPickup; // 0x631        
        // metadata: MNetworkEnable
        bool m_bCreepHeroPickup; // 0x632        
        // metadata: MNetworkEnable
        bool m_bCanBeConsumed; // 0x633        
        // metadata: MNetworkEnable
        int32_t m_iValuelessCharges; // 0x634        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iCurrentCharges; // 0x638        
        // metadata: MNetworkEnable
        int32_t m_iSecondaryCharges; // 0x63c        
        // metadata: MNetworkEnable
        int32_t m_iMaxCharges; // 0x640        
        // metadata: MNetworkEnable
        bool m_bCombineLocked; // 0x644        
        [[maybe_unused]] std::uint8_t pad_0x645[0x3]; // 0x645
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flPurchaseTime; // 0x648        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flAssembledTime; // 0x64c        
        // metadata: MNetworkEnable
        bool m_bPurchasedWhileDead; // 0x650        
        // metadata: MNetworkEnable
        bool m_bCanBeUsedOutOfInventory; // 0x651        
        // metadata: MNetworkEnable
        bool m_bItemEnabled; // 0x652        
        [[maybe_unused]] std::uint8_t pad_0x653[0x1]; // 0x653
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flEnableTime; // 0x654        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flReclaimTime; // 0x658        
        // metadata: MNetworkEnable
        bool m_bDisplayOwnership; // 0x65c        
        // metadata: MNetworkEnable
        bool m_bShowOnMinimap; // 0x65d        
        [[maybe_unused]] std::uint8_t pad_0x65e[0x2]; // 0x65e
        // metadata: MNetworkEnable
        float m_flMinimapIconSize; // 0x660        
        // metadata: MNetworkEnable
        bool m_bIsUpgradeable; // 0x664        
        [[maybe_unused]] std::uint8_t pad_0x665[0x3]; // 0x665
        // metadata: MNetworkEnable
        int32_t m_nUpgradeProgress; // 0x668        
        // metadata: MNetworkEnable
        int32_t m_nUpgradeGoal; // 0x66c        
        // m_hOldOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOldOwnerEntity;
        char m_hOldOwnerEntity[0x4]; // 0x670        
        int32_t m_iOldCharges; // 0x674        
        // metadata: MNetworkEnable
        client::PlayerID_t m_iPlayerOwnerID; // 0x678        
        [[maybe_unused]] std::uint8_t pad_0x67c[0x4]; // 0x67c
        // metadata: MNetworkEnable
        // m_vecPreGameTransferPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<uint8_t> m_vecPreGameTransferPlayerIDs;
        char m_vecPreGameTransferPlayerIDs[0x18]; // 0x680        
        [[maybe_unused]] std::uint8_t pad_0x698[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item) == 0x6a0);
};
