#pragma once
#include "source2sdk/smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "source2sdk/smartprops/CSmartPropOperation_Trace.hpp"
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
    // Size: 0x490
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Transform: Trace To Line"
    // static metadata: MPropertyDescription "Perform a trace from a specified origin point to a the closest point on a line."
    // static metadata: MVDataClassGroup
    // static metadata: MVDataExperimentalNodeSet
    #pragma pack(push, 1)
    class CSmartPropOperation_TraceToLine : public smartprops::CSmartPropOperation_Trace
    {
    public:
        // metadata: MPropertyStartGroup "+Line End Point A"
        // metadata: MPropertyDescription "End point of the line to trace to."
        CSmartPropAttributeVector m_EndPointA; // 0x310        
        // metadata: MPropertyDescription "Coordinate space the end point is specified in."
        smartprops::CSmartPropAttributeCoordinateSpace m_EndPointSpaceA; // 0x350        
        // metadata: MPropertyStartGroup "+Line End Point B"
        // metadata: MPropertyDescription "End point of the line to trace to."
        CSmartPropAttributeVector m_EndPointB; // 0x390        
        // metadata: MPropertyDescription "Coordinate space the end point is specified in."
        smartprops::CSmartPropAttributeCoordinateSpace m_EndPointSpaceB; // 0x3d0        
        // metadata: MPropertyStartGroup "+Trace Away"
        // metadata: MPropertyFriendlyName "Trace away from line"
        // metadata: MPropertyDescription "If enabled, instead of tracing from the origin to the line, trace away from the line for the specified distance starting at the origin."
        CSmartPropAttributeBool m_bTraceAway; // 0x410        
        // metadata: MPropertyReadonlyExpr
        // metadata: MPropertyDescription "Maximum length of the trace. Surfaces beyond this distance will not be hit."
        CSmartPropAttributeFloat m_flTraceLength; // 0x450        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_TraceToLine because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_TraceToLine) == 0x490);
};
