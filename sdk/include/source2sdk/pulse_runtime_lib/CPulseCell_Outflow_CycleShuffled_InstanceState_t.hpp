#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        struct CPulseCell_Outflow_CycleShuffled_InstanceState_t
        {
        public:
            // m_Shuffle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorFixedGrowable<std::uint8_t,8> m_Shuffle;
            char m_Shuffle[0x_]; // 0x_            
            std::int32_t m_nNextShuffle; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_Outflow_CycleShuffled_InstanceState_t, m_Shuffle) == 0x_);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_Outflow_CycleShuffled_InstanceState_t, m_nNextShuffle) == 0x_);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_Outflow_CycleShuffled_InstanceState_t) == 0x_);
    };
};
