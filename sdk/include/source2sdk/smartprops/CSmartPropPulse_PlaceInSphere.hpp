#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace smartprops
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x90
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "SmartPropEval"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "0Z´èÿ"
        // static metadata: MPropertyFriendlyName "Place In Radius"
        // static metadata: MPropertyDescription "An element which places multiple instances of its child elements within a radius."
        #pragma pack(push, 1)
        class CSmartPropPulse_PlaceInSphere : public source2sdk::pulse_runtime_lib::CPulseCell_BaseFlow
        {
        public:
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_Place; // 0x48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSmartPropPulse_PlaceInSphere because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::smartprops::CSmartPropPulse_PlaceInSphere) == 0x90);
    };
};
