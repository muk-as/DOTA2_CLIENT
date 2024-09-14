#pragma once
#include "source2sdk/smartprops/CSmartPropAttributeDistributionMode.hpp"
#include "source2sdk/smartprops/CSmartPropAttributeRadiusPlacementMode.hpp"
#include "source2sdk/smartprops/CSmartPropElement_Group.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x320
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Place In Radius"
    // static metadata: MPropertyDescription "An element which places multiple instances of its child elements within a radius."
    #pragma pack(push, 1)
    class CSmartPropElement_PlaceInSphere : public smartprops::CSmartPropElement_Group
    {
    public:
        // metadata: MPropertyDescription "Specifies how the positions are computed based on the radius."
        smartprops::CSmartPropAttributeRadiusPlacementMode m_PlacementMode; // 0xa0        
        // metadata: MPropertyDescription "Specifies the method to be used to distribute."
        smartprops::CSmartPropAttributeDistributionMode m_DistributionMode; // 0xe0        
        // metadata: MPropertySuppressExpr "m_DistributionMode == RANDOM"
        // metadata: MPropertyDescription "0 to 1 value indicating the amout of random offset that should be applied to the reguluarly spaced positions"
        CSmartPropAttributeFloat m_flRandomness; // 0x120        
        // metadata: MPropertySuppressExpr "m_PlacementMode == SPHERE"
        // metadata: MPropertyDescription "Vector up direction of the plane of the circle. This in the local space of the current element."
        CSmartPropAttributeVector m_vPlaneUpDirection; // 0x160        
        // metadata: MPropertyDescription "Minimum number of instances of this object and its children to be placed."
        CSmartPropAttributeInt m_nCountMin; // 0x1a0        
        // metadata: MPropertyDescription "Maximum number of instances of this object and its children to be placed."
        CSmartPropAttributeInt m_nCountMax; // 0x1e0        
        // metadata: MPropertyDescription "Inner radius from the placement position where the model can appear."
        CSmartPropAttributeFloat m_flPositionRadiusInner; // 0x220        
        // metadata: MPropertyDescription "Outer radius from the placement position where the model can appear."
        CSmartPropAttributeFloat m_flPositionRadiusOuter; // 0x260        
        // metadata: MPropertyDescription "Align the initial orientation of each placed object based on it position on the sphere or circle."
        CSmartPropAttributeBool m_bAlignOrientation; // 0x2a0        
        // metadata: MPropertyReadonlyExpr
        // metadata: MPropertyDescription "Vector in the local space of the child element to be aligned with sphere or circle"
        CSmartPropAttributeVector m_vAlignDirection; // 0x2e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropElement_PlaceInSphere because it is not a standard-layout class
    static_assert(sizeof(CSmartPropElement_PlaceInSphere) == 0x320);
};
