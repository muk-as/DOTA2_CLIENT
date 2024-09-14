#pragma once
#include "source2sdk/smartprops/CSmartPropAttributeGridOriginMode.hpp"
#include "source2sdk/smartprops/CSmartPropAttributeGridPlacementMode.hpp"
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
    // Size: 0x3a0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Layout Grid"
    // static metadata: MPropertyDescription "Generates set of child instances arranged in a regular grid layout."
    #pragma pack(push, 1)
    class CSmartPropElement_Layout2DGrid : public smartprops::CSmartPropElement_Group
    {
    public:
        // metadata: MPropertyDescription "Overall grid dimension along X axis."
        // metadata: MPropertyAttributeRange "biased 0 4096"
        CSmartPropAttributeFloat m_flWidth; // 0xa0        
        // metadata: MPropertyDescription "Overall grid dimension along Y axis."
        // metadata: MPropertyAttributeRange "biased 0 4096"
        CSmartPropAttributeFloat m_flLength; // 0xe0        
        // metadata: MPropertyDescription "Layout length vertically (Along Z axis instead of Y)."
        CSmartPropAttributeBool m_bVerticalLength; // 0x120        
        // metadata: MPropertyDescription "ARRAY: Grid is a specific number of grid divisions. FILL: The boundary is filled with as many as will fit at the specified cell spacing."
        smartprops::CSmartPropAttributeGridPlacementMode m_GridArrangement; // 0x160        
        // metadata: MPropertyDescription "Specifies the overall grid origin location. Corner origin grids default to quadrant I, but may be expressed in others using negative values for Width and/or Length."
        smartprops::CSmartPropAttributeGridOriginMode m_GridOriginMode; // 0x1a0        
        // metadata: MPropertyDescription "Grid segments along width axis."
        // metadata: MPropertyAttributeRange "1 64"
        // metadata: MPropertySuppressExpr "m_GridArrangement == FILL"
        CSmartPropAttributeInt m_nCountW; // 0x1e0        
        // metadata: MPropertyDescription "Grid segments along Length axis."
        // metadata: MPropertyAttributeRange "1 64"
        // metadata: MPropertySuppressExpr "m_GridArrangement == FILL"
        CSmartPropAttributeInt m_nCountL; // 0x220        
        // metadata: MPropertyDescription "Minimum Width of filled grid cells."
        // metadata: MPropertyAttributeRange "biased 0 1024"
        // metadata: MPropertySuppressExpr "m_GridArrangement == SEGMENT"
        CSmartPropAttributeFloat m_flSpacingWidth; // 0x260        
        // metadata: MPropertyDescription "Minimum Length of filled grid cells."
        // metadata: MPropertyAttributeRange "biased 0 1024"
        // metadata: MPropertySuppressExpr "m_GridArrangement == SEGMENT"
        CSmartPropAttributeFloat m_flSpacingLength; // 0x2a0        
        // metadata: MPropertyDescription "Shifts every other cell row and/or column."
        // metadata: MPropertySuppressExpr "m_GridArrangement == FILL"
        CSmartPropAttributeBool m_bAlternateShift; // 0x2e0        
        // metadata: MPropertyDescription "Vary cell shift in X."
        // metadata: MPropertyAttributeRange "biased 0 1024"
        // metadata: MPropertySuppressExpr "m_GridArrangement == FILL || m_bAlternateShift == false"
        CSmartPropAttributeFloat m_flAlternateShiftWidth; // 0x320        
        // metadata: MPropertyDescription "Vary cell shift in Y."
        // metadata: MPropertyAttributeRange "biased 0 1024"
        // metadata: MPropertySuppressExpr "m_GridArrangement == FILL || m_bAlternateShift == false"
        CSmartPropAttributeFloat m_flAlternateShiftLength; // 0x360        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropElement_Layout2DGrid because it is not a standard-layout class
    static_assert(sizeof(CSmartPropElement_Layout2DGrid) == 0x3a0);
};
