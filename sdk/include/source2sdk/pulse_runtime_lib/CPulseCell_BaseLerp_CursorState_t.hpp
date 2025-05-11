#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace pulse_runtime_lib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CPulseCell_BaseLerp_CursorState_t
        {
        public:
            source2sdk::entity2::GameTime_t m_StartTime; // 0x0            
            source2sdk::entity2::GameTime_t m_EndTime; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_BaseLerp_CursorState_t, m_StartTime) == 0x0);
        static_assert(offsetof(source2sdk::pulse_runtime_lib::CPulseCell_BaseLerp_CursorState_t, m_EndTime) == 0x4);
        
        static_assert(sizeof(source2sdk::pulse_runtime_lib::CPulseCell_BaseLerp_CursorState_t) == 0x8);
    };
};
