#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseYieldingInflow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_ResumePoint.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "PanoramaPanel"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo ""
        // static metadata: MPropertyFriendlyName "Shmup Wait For Duration"
        #pragma pack(push, 1)
        class CPulseCell_ShmupWaitForDuration : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_WakeResume; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_ShmupWaitForDuration because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPulseCell_ShmupWaitForDuration) == 0x_);
    };
};
