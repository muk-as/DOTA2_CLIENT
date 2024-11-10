#pragma once
#include "source2sdk/client/C_EconWearable.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBaseAnimatingActivity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc00
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
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
    class C_DOTAWearableItem : public client::C_EconWearable
    {
    public:
        // metadata: MNetworkEnable
        bool m_bOwnerModelChanged; // 0xb78        
        // metadata: MNetworkEnable
        bool m_bIsGeneratingEconItem; // 0xb79        
        // metadata: MNetworkEnable
        bool m_bIsItemVisibleOnGeneratedEntity; // 0xb7a        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnHideWearableButDrawAdditionalWearablesChanged"
        bool m_bHideWearableButDrawAdditionalWearables; // 0xb7b        
        // metadata: MNetworkEnable
        // m_hAdditionalWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBaseAnimatingActivity> m_hAdditionalWearable;
        char m_hAdditionalWearable[0x4]; // 0xb7c        
        // m_hDrawWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTAWearableItem> m_hDrawWearable;
        char m_hDrawWearable[0x4]; // 0xb80        
        bool m_bHiddenByCombiner; // 0xb84        
        bool m_bHiddenByEquipmentSlot; // 0xb85        
        bool m_bIsPortrait; // 0xb86        
        [[maybe_unused]] std::uint8_t pad_0xb87[0x1]; // 0xb87
        float m_fZDelta; // 0xb88        
        [[maybe_unused]] std::uint8_t pad_0xb8c[0x4]; // 0xb8c
        // m_combinerMaterialOverrideList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CStrongHandleCopyable<resourcesystem::InfoForResourceTypeIMaterial2>> m_combinerMaterialOverrideList;
        char m_combinerMaterialOverrideList[0x18]; // 0xb90        
        [[maybe_unused]] std::uint8_t pad_0xba8[0x8]; // 0xba8
        bool m_bCombinerMaterialOverrideListChanged; // 0xbb0        
        bool m_bRubickFollower; // 0xbb1        
        bool m_bHasPlayerModel; // 0xbb2        
        [[maybe_unused]] std::uint8_t pad_0xbb3[0x4d];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTAWearableItem because it is not a standard-layout class
    static_assert(sizeof(C_DOTAWearableItem) == 0xc00);
};
