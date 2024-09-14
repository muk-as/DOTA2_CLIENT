#pragma once
#include "source2sdk/smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "source2sdk/smartprops/CSmartPropAttributePickMode.hpp"
#include "source2sdk/smartprops/CSmartPropAttributeScaleMode.hpp"
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
    // Size: 0x2e0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Fit on Line"
    // static metadata: MPropertyDescription "An element which fits one or more instances of a set of choices on to a line."
    #pragma pack(push, 1)
    class CSmartPropElement_FitOnLine : public smartprops::CSmartPropElement_Group
    {
    public:
        // metadata: MPropertyStartGroup "+End Points"
        // metadata: MPropertyDescription "Specifies the start point of the line in the specified coordinate space."
        CSmartPropAttributeVector m_vStart; // 0xa0        
        // metadata: MPropertyDescription "Specifies the end point of the line in the specified coordinate space."
        CSmartPropAttributeVector m_vEnd; // 0xe0        
        // metadata: MPropertyFriendlyName "End point space"
        // metadata: MPropertyDescription "Specifies the coordinate space in which the end point values are specified."
        smartprops::CSmartPropAttributeCoordinateSpace m_PointSpace; // 0x120        
        // metadata: MPropertyStartGroup "+Orientation"
        // metadata: MPropertyDescription "Should the child elements be oriented based on the line. If enabled the child elements placed on the line will be oriented such that their +x axis points along the line towards the end point."
        CSmartPropAttributeBool m_bOrientAlongLine; // 0x160        
        // metadata: MPropertyDescription "Up vector which is used to determine the rotation of each element around the line."
        CSmartPropAttributeVector m_vUpDirection; // 0x1a0        
        // metadata: MPropertyDescription "Space in which the up direction is defined."
        smartprops::CSmartPropAttributeCoordinateSpace m_UpDirectionSpace; // 0x1e0        
        // metadata: MPropertyDescription "When the up direction is not orthogonal to the line direction normally the up vector will be adjusted to make it orthogonal to the line direction. If prioritize up is true, then the up direction will be maintained and the forward direction will be adjusted."
        CSmartPropAttributeBool m_bPrioritizeUp; // 0x220        
        // metadata: MPropertyStartGroup
        // metadata: MPropertyFriendlyName "Scale Mode"
        // metadata: MPropertyDescription "Specifies how scale is applied to each of the selected element in order to fit them to the line."
        smartprops::CSmartPropAttributeScaleMode m_nScaleMode; // 0x260        
        // metadata: MPropertyFriendlyName "Child Selection Mode"
        // metadata: MPropertyDescription "Specifies how scale is applied to each of the selected element in order to fit them to the line."
        smartprops::CSmartPropAttributePickMode m_nPickMode; // 0x2a0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropElement_FitOnLine because it is not a standard-layout class
    static_assert(sizeof(CSmartPropElement_FitOnLine) == 0x2e0);
};
