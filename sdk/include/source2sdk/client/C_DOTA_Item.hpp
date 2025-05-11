#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x650
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
        // static metadata: MNetworkVarNames "bool m_bIsNeutralActiveDrop"
        // static metadata: MNetworkVarNames "bool m_bIsNeutralPassiveDrop"
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
        // static metadata: MNetworkVarNames "bool m_bMarkForSell"
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
        class C_DOTA_Item : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t m_CastAnimation; // 0x5b0            
            // metadata: MNetworkEnable
            bool m_bCombinable; // 0x5b4            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bPermanent; // 0x5b5            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bStackable; // 0x5b6            
            uint8_t _pad05b7[0x1]; // 0x5b7
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iStackableMax; // 0x5b8            
            // metadata: MNetworkEnable
            bool m_bRecipe; // 0x5bc            
            // metadata: MNetworkEnable
            bool m_bRecipeConsumesCharges; // 0x5bd            
            uint8_t _pad05be[0x2]; // 0x5be
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iSharability; // 0x5c0            
            // metadata: MNetworkEnable
            bool m_bDroppable; // 0x5c4            
            // metadata: MNetworkEnable
            bool m_bPurchasable; // 0x5c5            
            // metadata: MNetworkEnable
            bool m_bSellable; // 0x5c6            
            // metadata: MNetworkEnable
            bool m_bInitiallySellable; // 0x5c7            
            // metadata: MNetworkEnable
            bool m_bForceUnsellable; // 0x5c8            
            // metadata: MNetworkEnable
            bool m_bRequiresCharges; // 0x5c9            
            bool m_bDisplayCharges; // 0x5ca            
            bool m_bHideCharges; // 0x5cb            
            // metadata: MNetworkEnable
            bool m_bKillable; // 0x5cc            
            // metadata: MNetworkEnable
            bool m_bGloballyCombinable; // 0x5cd            
            // metadata: MNetworkEnable
            bool m_bDisassemblable; // 0x5ce            
            // metadata: MNetworkEnable
            bool m_bNeverDisassemble; // 0x5cf            
            // metadata: MNetworkEnable
            bool m_bIsNeutralActiveDrop; // 0x5d0            
            // metadata: MNetworkEnable
            bool m_bIsNeutralPassiveDrop; // 0x5d1            
            uint8_t _pad05d2[0x2]; // 0x5d2
            // metadata: MNetworkEnable
            std::int32_t m_nNeutralDropTeam; // 0x5d4            
            // metadata: MNetworkEnable
            bool m_bAlertable; // 0x5d8            
            uint8_t _pad05d9[0x3]; // 0x5d9
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iInitialCharges; // 0x5dc            
            // metadata: MNetworkEnable
            bool m_bCastOnPickup; // 0x5e0            
            // metadata: MNetworkEnable
            bool m_bOnlyPlayerHeroPickup; // 0x5e1            
            // metadata: MNetworkEnable
            bool m_bCreepHeroPickup; // 0x5e2            
            // metadata: MNetworkEnable
            bool m_bCanBeConsumed; // 0x5e3            
            // metadata: MNetworkEnable
            std::int32_t m_iValuelessCharges; // 0x5e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentCharges; // 0x5e8            
            // metadata: MNetworkEnable
            std::int32_t m_iSecondaryCharges; // 0x5ec            
            // metadata: MNetworkEnable
            std::int32_t m_iMaxCharges; // 0x5f0            
            // metadata: MNetworkEnable
            bool m_bCombineLocked; // 0x5f4            
            // metadata: MNetworkEnable
            bool m_bMarkForSell; // 0x5f5            
            uint8_t _pad05f6[0x2]; // 0x5f6
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flPurchaseTime; // 0x5f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flAssembledTime; // 0x5fc            
            // metadata: MNetworkEnable
            bool m_bPurchasedWhileDead; // 0x600            
            // metadata: MNetworkEnable
            bool m_bCanBeUsedOutOfInventory; // 0x601            
            // metadata: MNetworkEnable
            bool m_bItemEnabled; // 0x602            
            uint8_t _pad0603[0x1]; // 0x603
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flEnableTime; // 0x604            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flReclaimTime; // 0x608            
            // metadata: MNetworkEnable
            bool m_bDisplayOwnership; // 0x60c            
            // metadata: MNetworkEnable
            bool m_bShowOnMinimap; // 0x60d            
            uint8_t _pad060e[0x2]; // 0x60e
            // metadata: MNetworkEnable
            float m_flMinimapIconSize; // 0x610            
            // metadata: MNetworkEnable
            bool m_bIsUpgradeable; // 0x614            
            uint8_t _pad0615[0x3]; // 0x615
            // metadata: MNetworkEnable
            std::int32_t m_nUpgradeProgress; // 0x618            
            // metadata: MNetworkEnable
            std::int32_t m_nUpgradeGoal; // 0x61c            
            // m_hOldOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldOwnerEntity;
            char m_hOldOwnerEntity[0x4]; // 0x620            
            std::int32_t m_iOldCharges; // 0x624            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iPlayerOwnerID; // 0x628            
            uint8_t _pad062c[0x4]; // 0x62c
            // metadata: MNetworkEnable
            // m_vecPreGameTransferPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_vecPreGameTransferPlayerIDs;
            char m_vecPreGameTransferPlayerIDs[0x18]; // 0x630            
            uint8_t _pad0648[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item) == 0x650);
    };
};
