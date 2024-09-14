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
    // Size: 0x410
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Transform: Trace To Point"
    // static metadata: MPropertyDescription "Perform a trace between the specified origin and a specified target point."
    // static metadata: MVDataClassGroup
    // static metadata: MVDataExperimentalNodeSet
    #pragma pack(push, 1)
    class CSmartPropOperation_TraceToPoint : public smartprops::CSmartPropOperation_Trace
    {
    public:
        // metadata: MPropertyStartGroup "+Target Point"
        // metadata: MPropertyDescription "The target point to trace to from the origin."
        CSmartPropAttributeVector m_TargetPoint; // 0x310        
        // metadata: MPropertyDescription "Specifies the coordinate space the target point is specified in."
        smartprops::CSmartPropAttributeCoordinateSpace m_TargetPointSpace; // 0x350        
        // metadata: MPropertyStartGroup "+Trace Away"
        // metadata: MPropertyFriendlyName "Trace away from point"
        // metadata: MPropertyDescription "If enabled, instead of tracing from the origin to the target point, trace away from the target point for the specified distance starting at the origin."
        CSmartPropAttributeBool m_bTraceAway; // 0x390        
        // metadata: MPropertyReadonlyExpr
        // metadata: MPropertyDescription "Maximum length of the trace. Surfaces beyond this distance will not be hit."
        CSmartPropAttributeFloat m_flTraceLength; // 0x3d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_TraceToPoint because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_TraceToPoint) == 0x410);
};
