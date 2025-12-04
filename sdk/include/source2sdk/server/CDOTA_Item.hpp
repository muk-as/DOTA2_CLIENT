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
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            std::int32_t m_iState; // 0x_            
            std::int32_t m_CastAnimation; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCombinable; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bPermanent; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            bool m_bStackable; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iStackableMax; // 0x_            
            // metadata: MNetworkEnable
            bool m_bRecipe; // 0x_            
            // metadata: MNetworkEnable
            bool m_bRecipeConsumesCharges; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iSharability; // 0x_            
            // metadata: MNetworkEnable
            bool m_bDroppable; // 0x_            
            // metadata: MNetworkEnable
            bool m_bPurchasable; // 0x_            
            // metadata: MNetworkEnable
            bool m_bSellable; // 0x_            
            // metadata: MNetworkEnable
            bool m_bInitiallySellable; // 0x_            
            // metadata: MNetworkEnable
            bool m_bForceUnsellable; // 0x_            
            // metadata: MNetworkEnable
            bool m_bRequiresCharges; // 0x_            
            // metadata: MNetworkEnable
            bool m_bKillable; // 0x_            
            // metadata: MNetworkEnable
            bool m_bGloballyCombinable; // 0x_            
            // metadata: MNetworkEnable
            bool m_bDisassemblable; // 0x_            
            // metadata: MNetworkEnable
            bool m_bNeverDisassemble; // 0x_            
            bool m_bIsTempestDoubleClonable; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsNeutralActiveDrop; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsNeutralPassiveDrop; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nNeutralDropTeam; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAlertable; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iInitialCharges; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCastOnPickup; // 0x_            
            // metadata: MNetworkEnable
            bool m_bOnlyPlayerHeroPickup; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCreepHeroPickup; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanBeUsedOutOfInventory; // 0x_            
            // metadata: MNetworkEnable
            bool m_bItemEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flEnableTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flReclaimTime; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCanBeConsumed; // 0x_            
            // metadata: MNetworkEnable
            bool m_bDisplayOwnership; // 0x_            
            // metadata: MNetworkEnable
            bool m_bShowOnMinimap; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flMinimapIconSize; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsUpgradeable; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nUpgradeProgress; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nUpgradeGoal; // 0x_            
            // metadata: MNetworkEnable
            // m_vecPreGameTransferPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::uint8_t> m_vecPreGameTransferPlayerIDs;
            char m_vecPreGameTransferPlayerIDs[0x_]; // 0x_            
            bool m_bStackWithOtherOwners; // 0x_            
            bool m_bTemporarilyUncombinable; // 0x_            
            bool m_bHasCommentedOnEquip; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iDeclarationFlags; // 0x_            
            bool m_bCreatedByDisassemble; // 0x_            
            bool m_bHasMixedOwnership; // 0x_            
            bool m_bIsClonedItemProxy; // 0x_            
            bool m_bNeutralItemRequestDrop; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            source2sdk::entity2::GameTime_t m_flPurchaseTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flAssembledTime; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            std::int32_t m_iCurrentCharges; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iValuelessCharges; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iSecondaryCharges; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCombineLocked; // 0x_            
            // metadata: MNetworkEnable
            bool m_bMarkForSell; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hContainer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Item_Physical> m_hContainer;
            char m_hContainer[0x_]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::client::PlayerID_t m_iPlayerOwnerID; // 0x_            
            // metadata: MNetworkEnable
            bool m_bPurchasedWhileDead; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nCombineVersion; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item) == 0x_);
    };
};
