#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Item_Physical;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x688
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
        // static metadata: MNetworkVarNames "bool m_bMarkForSell"
        // static metadata: MNetworkVarNames "PlayerID_t m_iPlayerOwnerID"
        // static metadata: MNetworkVarNames "bool m_bPurchasedWhileDead"
        #pragma pack(push, 1)
        class CDOTA_Item : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_iState; // 0x5b8            
            std::int32_t m_CastAnimation; // 0x5bc            
            // metadata: MNetworkEnable
            bool m_bCombinable; // 0x5c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bPermanent; // 0x5c1            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bStackable; // 0x5c2            
            uint8_t _pad05c3[0x1]; // 0x5c3
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iStackableMax; // 0x5c4            
            // metadata: MNetworkEnable
            bool m_bRecipe; // 0x5c8            
            // metadata: MNetworkEnable
            bool m_bRecipeConsumesCharges; // 0x5c9            
            uint8_t _pad05ca[0x2]; // 0x5ca
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iSharability; // 0x5cc            
            // metadata: MNetworkEnable
            bool m_bDroppable; // 0x5d0            
            // metadata: MNetworkEnable
            bool m_bPurchasable; // 0x5d1            
            // metadata: MNetworkEnable
            bool m_bSellable; // 0x5d2            
            // metadata: MNetworkEnable
            bool m_bInitiallySellable; // 0x5d3            
            // metadata: MNetworkEnable
            bool m_bForceUnsellable; // 0x5d4            
            // metadata: MNetworkEnable
            bool m_bRequiresCharges; // 0x5d5            
            // metadata: MNetworkEnable
            bool m_bKillable; // 0x5d6            
            // metadata: MNetworkEnable
            bool m_bGloballyCombinable; // 0x5d7            
            // metadata: MNetworkEnable
            bool m_bDisassemblable; // 0x5d8            
            // metadata: MNetworkEnable
            bool m_bNeverDisassemble; // 0x5d9            
            bool m_bIsTempestDoubleClonable; // 0x5da            
            // metadata: MNetworkEnable
            bool m_bIsNeutralActiveDrop; // 0x5db            
            // metadata: MNetworkEnable
            bool m_bIsNeutralPassiveDrop; // 0x5dc            
            uint8_t _pad05dd[0x3]; // 0x5dd
            // metadata: MNetworkEnable
            std::int32_t m_nNeutralDropTeam; // 0x5e0            
            // metadata: MNetworkEnable
            bool m_bAlertable; // 0x5e4            
            uint8_t _pad05e5[0x3]; // 0x5e5
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iInitialCharges; // 0x5e8            
            // metadata: MNetworkEnable
            bool m_bCastOnPickup; // 0x5ec            
            // metadata: MNetworkEnable
            bool m_bOnlyPlayerHeroPickup; // 0x5ed            
            // metadata: MNetworkEnable
            bool m_bCreepHeroPickup; // 0x5ee            
            // metadata: MNetworkEnable
            bool m_bCanBeUsedOutOfInventory; // 0x5ef            
            // metadata: MNetworkEnable
            bool m_bItemEnabled; // 0x5f0            
            uint8_t _pad05f1[0x3]; // 0x5f1
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flEnableTime; // 0x5f4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flReclaimTime; // 0x5f8            
            // metadata: MNetworkEnable
            bool m_bCanBeConsumed; // 0x5fc            
            // metadata: MNetworkEnable
            bool m_bDisplayOwnership; // 0x5fd            
            // metadata: MNetworkEnable
            bool m_bShowOnMinimap; // 0x5fe            
            uint8_t _pad05ff[0x1]; // 0x5ff
            // metadata: MNetworkEnable
            float m_flMinimapIconSize; // 0x600            
            // metadata: MNetworkEnable
            bool m_bIsUpgradeable; // 0x604            
            uint8_t _pad0605[0x3]; // 0x605
            // metadata: MNetworkEnable
            std::int32_t m_nUpgradeProgress; // 0x608            
            // metadata: MNetworkEnable
            std::int32_t m_nUpgradeGoal; // 0x60c            
            // metadata: MNetworkEnable
            // m_vecPreGameTransferPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_vecPreGameTransferPlayerIDs;
            char m_vecPreGameTransferPlayerIDs[0x18]; // 0x610            
            bool m_bStackWithOtherOwners; // 0x628            
            bool m_bTemporarilyUncombinable; // 0x629            
            bool m_bHasCommentedOnEquip; // 0x62a            
            uint8_t _pad062b[0x1]; // 0x62b
            std::int32_t m_iDeclarationFlags; // 0x62c            
            bool m_bCreatedByDisassemble; // 0x630            
            bool m_bHasMixedOwnership; // 0x631            
            bool m_bIsClonedItemProxy; // 0x632            
            bool m_bNeutralItemRequestDrop; // 0x633            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flPurchaseTime; // 0x634            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flAssembledTime; // 0x638            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentCharges; // 0x63c            
            // metadata: MNetworkEnable
            std::int32_t m_iValuelessCharges; // 0x640            
            // metadata: MNetworkEnable
            std::int32_t m_iSecondaryCharges; // 0x644            
            // metadata: MNetworkEnable
            bool m_bCombineLocked; // 0x648            
            // metadata: MNetworkEnable
            bool m_bMarkForSell; // 0x649            
            uint8_t _pad064a[0x2]; // 0x64a
            // m_hContainer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Item_Physical> m_hContainer;
            char m_hContainer[0x4]; // 0x64c            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iPlayerOwnerID; // 0x650            
            // metadata: MNetworkEnable
            bool m_bPurchasedWhileDead; // 0x654            
            uint8_t _pad0655[0x3]; // 0x655
            std::int32_t m_nCombineVersion; // 0x658            
            uint8_t _pad065c[0x2c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item) == 0x688);
    };
};
