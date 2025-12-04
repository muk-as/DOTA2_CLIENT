#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct OutflowWithRequirements_t
        {
        public:
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_Connection; // 0x_            
            source2sdk::pulse_runtime_lib::PulseDocNodeID_t m_DestinationFlowNodeID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_RequirementNodeIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::pulse_runtime_lib::PulseDocNodeID_t> m_RequirementNodeIDs;
            char m_RequirementNodeIDs[0x_]; // 0x_            
            // m_nCursorStateBlockIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_nCursorStateBlockIndex;
            char m_nCursorStateBlockIndex[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::OutflowWithRequirements_t, m_Connection) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::OutflowWithRequirements_t, m_DestinationFlowNodeID) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::OutflowWithRequirements_t, m_RequirementNodeIDs) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::OutflowWithRequirements_t, m_nCursorStateBlockIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::OutflowWithRequirements_t) == 0x_);
    };
};
