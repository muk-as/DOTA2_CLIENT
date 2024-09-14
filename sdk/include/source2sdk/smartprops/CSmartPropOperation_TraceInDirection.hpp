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
    // Size: 0x3d0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Transform: Trace In Direction"
    // static metadata: MPropertyDescription "Perform a trace in a direction from a specified origin and stop when a surface is hit."
    // static metadata: MVDataClassGroup
    #pragma pack(push, 1)
    class CSmartPropOperation_TraceInDirection : public smartprops::CSmartPropOperation_Trace
    {
    public:
        // metadata: MPropertyStartGroup "+Trace Direction"
        CSmartPropAttributeVector m_vTraceDirection; // 0x310        
        // metadata: MPropertyDescription "Specifies the coordinate space the trace direction vector is specified in."
        smartprops::CSmartPropAttributeCoordinateSpace m_DirectionSpace; // 0x350        
        // metadata: MPropertyDescription "Maximum length of the trace. Surfaces beyond this distance will not be hit."
        CSmartPropAttributeFloat m_flTraceLength; // 0x390        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropOperation_TraceInDirection because it is not a standard-layout class
    static_assert(sizeof(CSmartPropOperation_TraceInDirection) == 0x3d0);
};
