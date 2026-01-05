#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_EconWearable.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimatingActivity;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
        // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
        // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
        // static metadata: MNetworkExcludeByName "m_flexWeight"
        // static metadata: MNetworkExcludeByName "m_vLookTargetPosition"
        // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
        // static metadata: MNetworkExcludeByName "m_nForceBone"
        // static metadata: MNetworkExcludeByName "m_vecForce"
        // static metadata: MNetworkExcludeByName "m_nHitboxSet"
        // static metadata: MNetworkExcludeByName "m_flEncodedController"
        // static metadata: MNetworkExcludeByName "m_flSimulationTime"
        // static metadata: MNetworkExcludeByName "m_angRotation"
        // static metadata: MNetworkExcludeByName "m_vecOrigin"
        // static metadata: MNetworkExcludeByName "m_cellX"
        // static metadata: MNetworkExcludeByName "m_cellY"
        // static metadata: MNetworkExcludeByName "m_cellZ"
        // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
        // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
        // static metadata: MNetworkExcludeByName "m_vecMaxs"
        // static metadata: MNetworkExcludeByName "m_vecMins"
        // static metadata: MNetworkExcludeByName "m_hOwnerEntity"
        // static metadata: MNetworkExcludeByName "m_hParent"
        // static metadata: MNetworkExcludeByName "m_flCreateTime"
        // static metadata: MNetworkExcludeByName "CAttributeManager::m_hOuter"
        // static metadata: MNetworkExcludeByName "VPhysicsCollisionAttribute_t::m_nEntityId"
        // static metadata: MNetworkExcludeByName "VPhysicsCollisionAttribute_t::m_nOwnerId"
        // static metadata: MNetworkExcludeByName "VPhysicsCollisionAttribute_t::m_nHierarchyId"
        // static metadata: MNetworkExcludeByName "CEconItemView::m_iInventoryPosition"
        // static metadata: MNetworkVarNames "bool m_bOwnerModelChanged"
        // static metadata: MNetworkVarNames "bool m_bIsGeneratingEconItem"
        // static metadata: MNetworkVarNames "bool m_bIsItemVisibleOnGeneratedEntity"
        // static metadata: MNetworkVarNames "bool m_bHideWearableButDrawAdditionalWearables"
        // static metadata: MNetworkVarNames "CHandle< CBaseAnimating> m_hAdditionalWearable"
        #pragma pack(push, 1)
        class C_DOTAWearableItem : public source2sdk::client::C_EconWearable
        {
        public:
            // metadata: MNetworkEnable
            bool m_bOwnerModelChanged; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsGeneratingEconItem; // 0x_            
            // metadata: MNetworkEnable
            bool m_bIsItemVisibleOnGeneratedEntity; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnHideWearableButDrawAdditionalWearablesChanged"
            bool m_bHideWearableButDrawAdditionalWearables; // 0x_            
            // metadata: MNetworkEnable
            // m_hAdditionalWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimatingActivity> m_hAdditionalWearable;
            char m_hAdditionalWearable[0x_]; // 0x_            
            // m_hDrawWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTAWearableItem> m_hDrawWearable;
            char m_hDrawWearable[0x_]; // 0x_            
            bool m_bHiddenByCombiner; // 0x_            
            bool m_bHiddenByEquipmentSlot; // 0x_            
            bool m_bIsPortrait; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fZDelta; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_combinerMaterialOverrideList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2>> m_combinerMaterialOverrideList;
            char m_combinerMaterialOverrideList[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bCombinerMaterialOverrideListChanged; // 0x_            
            bool m_bRubickFollower; // 0x_            
            bool m_bHasPlayerModel; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAWearableItem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAWearableItem) == 0x_);
    };
};
