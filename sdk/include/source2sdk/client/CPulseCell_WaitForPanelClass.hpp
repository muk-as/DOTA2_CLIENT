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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x90
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCellForDomain "PanoramaPanel"
        // static metadata: MPulseCellMethodBindings
        // static metadata: MPulseCellOutflowHookInfo "XûÂ&û"
        // static metadata: MPropertyFriendlyName "Wait For Panel Class"
        #pragma pack(push, 1)
        class CPulseCell_WaitForPanelClass : public source2sdk::pulse_runtime_lib::CPulseCell_BaseYieldingInflow
        {
        public:
            source2sdk::pulse_runtime_lib::CPulse_ResumePoint m_WakeResume; // 0x48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_WaitForPanelClass because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPulseCell_WaitForPanelClass) == 0x90);
    };
};
