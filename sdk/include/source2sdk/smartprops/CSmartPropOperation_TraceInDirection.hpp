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
        // static metadata: MPropertyFriendlyName "Transform: Trace In Direction"
        // static metadata: MPropertyDescription "Perform a trace in a direction from a specified origin and stop when a surface is hit."
        // static metadata: MVDataClassGroup
        #pragma pack(push, 1)
        class CSmartPropOperation_TraceInDirection : public source2sdk::smartprops::CSmartPropOperation_Trace
        {
        public:
            // metadata: MPropertyStartGroup "+Trace Direction"
            CSmartPropAttributeVector m_vTraceDirection; // 0x_            
            // metadata: MPropertyDescription "Specifies the coordinate space the trace direction vector is specified in."
            source2sdk::smartprops::CSmartPropAttributeCoordinateSpace m_DirectionSpace; // 0x_            
            // metadata: MPropertyDescription "Maximum length of the trace. Surfaces beyond this distance will not be hit."
            CSmartPropAttributeFloat m_flTraceLength; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropOperation_TraceInDirection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropOperation_TraceInDirection) == 0x_);
    };
};
