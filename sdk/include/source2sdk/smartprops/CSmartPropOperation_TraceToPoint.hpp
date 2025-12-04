#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "source2sdk/smartprops/CSmartPropOperation_Trace.hpp"

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Transform: Trace To Point"
        // static metadata: MPropertyDescription "Perform a trace between the specified origin and a specified target point."
        // static metadata: MVDataClassGroup
        // static metadata: MVDataExperimentalNodeSet
        #pragma pack(push, 1)
        class CSmartPropOperation_TraceToPoint : public source2sdk::smartprops::CSmartPropOperation_Trace
        {
        public:
            // metadata: MPropertyStartGroup "+Target Point"
            // metadata: MPropertyDescription "The target point to trace to from the origin."
            CSmartPropAttributeVector m_TargetPoint; // 0x_            
            // metadata: MPropertyDescription "Specifies the coordinate space the target point is specified in."
            source2sdk::smartprops::CSmartPropAttributeCoordinateSpace m_TargetPointSpace; // 0x_            
            // metadata: MPropertyStartGroup "+Trace Away"
            // metadata: MPropertyFriendlyName "Trace away from point"
            // metadata: MPropertyDescription "If enabled, instead of tracing from the origin to the target point, trace away from the target point for the specified distance starting at the origin."
            CSmartPropAttributeBool m_bTraceAway; // 0x_            
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertyDescription "Maximum length of the trace. Surfaces beyond this distance will not be hit."
            CSmartPropAttributeFloat m_flTraceLength; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_TraceToPoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_TraceToPoint) == 0x_);
    };
};
