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
        // Size: 0x728
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
            std::int32_t m_CastAnimation; // 0x688            
            // metadata: MNetworkEnable
            bool m_bCombinable; // 0x68c            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bPermanent; // 0x68d            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bStackable; // 0x68e            
            uint8_t _pad068f[0x1]; // 0x68f
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iStackableMax; // 0x690            
            // metadata: MNetworkEnable
            bool m_bRecipe; // 0x694            
            // metadata: MNetworkEnable
            bool m_bRecipeConsumesCharges; // 0x695            
            uint8_t _pad0696[0x2]; // 0x696
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iSharability; // 0x698            
            // metadata: MNetworkEnable
            bool m_bDroppable; // 0x69c            
            // metadata: MNetworkEnable
            bool m_bPurchasable; // 0x69d            
            // metadata: MNetworkEnable
            bool m_bSellable; // 0x69e            
            // metadata: MNetworkEnable
            bool m_bInitiallySellable; // 0x69f            
            // metadata: MNetworkEnable
            bool m_bForceUnsellable; // 0x6a0            
            // metadata: MNetworkEnable
            bool m_bRequiresCharges; // 0x6a1            
            bool m_bDisplayCharges; // 0x6a2            
            bool m_bHideCharges; // 0x6a3            
            // metadata: MNetworkEnable
            bool m_bKillable; // 0x6a4            
            // metadata: MNetworkEnable
            bool m_bGloballyCombinable; // 0x6a5            
            // metadata: MNetworkEnable
            bool m_bDisassemblable; // 0x6a6            
            // metadata: MNetworkEnable
            bool m_bNeverDisassemble; // 0x6a7            
            // metadata: MNetworkEnable
            bool m_bIsNeutralActiveDrop; // 0x6a8            
            // metadata: MNetworkEnable
            bool m_bIsNeutralPassiveDrop; // 0x6a9            
            uint8_t _pad06aa[0x2]; // 0x6aa
            // metadata: MNetworkEnable
            std::int32_t m_nNeutralDropTeam; // 0x6ac            
            // metadata: MNetworkEnable
            bool m_bAlertable; // 0x6b0            
            uint8_t _pad06b1[0x3]; // 0x6b1
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iInitialCharges; // 0x6b4            
            // metadata: MNetworkEnable
            bool m_bCastOnPickup; // 0x6b8            
            // metadata: MNetworkEnable
            bool m_bOnlyPlayerHeroPickup; // 0x6b9            
            // metadata: MNetworkEnable
            bool m_bCreepHeroPickup; // 0x6ba            
            // metadata: MNetworkEnable
            bool m_bCanBeConsumed; // 0x6bb            
            // metadata: MNetworkEnable
            std::int32_t m_iValuelessCharges; // 0x6bc            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentCharges; // 0x6c0            
            // metadata: MNetworkEnable
            std::int32_t m_iSecondaryCharges; // 0x6c4            
            // metadata: MNetworkEnable
            std::int32_t m_iMaxCharges; // 0x6c8            
            // metadata: MNetworkEnable
            bool m_bCombineLocked; // 0x6cc            
            // metadata: MNetworkEnable
            bool m_bMarkForSell; // 0x6cd            
            uint8_t _pad06ce[0x2]; // 0x6ce
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flPurchaseTime; // 0x6d0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flAssembledTime; // 0x6d4            
            // metadata: MNetworkEnable
            bool m_bPurchasedWhileDead; // 0x6d8            
            // metadata: MNetworkEnable
            bool m_bCanBeUsedOutOfInventory; // 0x6d9            
            // metadata: MNetworkEnable
            bool m_bItemEnabled; // 0x6da            
            uint8_t _pad06db[0x1]; // 0x6db
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flEnableTime; // 0x6dc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flReclaimTime; // 0x6e0            
            // metadata: MNetworkEnable
            bool m_bDisplayOwnership; // 0x6e4            
            // metadata: MNetworkEnable
            bool m_bShowOnMinimap; // 0x6e5            
            uint8_t _pad06e6[0x2]; // 0x6e6
            // metadata: MNetworkEnable
            float m_flMinimapIconSize; // 0x6e8            
            // metadata: MNetworkEnable
            bool m_bIsUpgradeable; // 0x6ec            
            uint8_t _pad06ed[0x3]; // 0x6ed
            // metadata: MNetworkEnable
            std::int32_t m_nUpgradeProgress; // 0x6f0            
            // metadata: MNetworkEnable
            std::int32_t m_nUpgradeGoal; // 0x6f4            
            // m_hOldOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hOldOwnerEntity;
            char m_hOldOwnerEntity[0x4]; // 0x6f8            
            std::int32_t m_iOldCharges; // 0x6fc            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iPlayerOwnerID; // 0x700            
            uint8_t _pad0704[0x4]; // 0x704
            // metadata: MNetworkEnable
            // m_vecPreGameTransferPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_vecPreGameTransferPlayerIDs;
            char m_vecPreGameTransferPlayerIDs[0x18]; // 0x708            
            uint8_t _pad0720[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item) == 0x728);
    };
};
