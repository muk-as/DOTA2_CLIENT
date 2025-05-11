#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x18
        #pragma pack(push, 1)
        class CBreakableStageHelper
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            std::int32_t m_nCurrentStage; // 0x8            
            std::int32_t m_nStageCount; // 0xc            
            uint8_t _pad0010[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBreakableStageHelper, m_nCurrentStage) == 0x8);
        static_assert(offsetof(source2sdk::client::CBreakableStageHelper, m_nStageCount) == 0xc);
        
        static_assert(sizeof(source2sdk::client::CBreakableStageHelper) == 0x18);
    };
};
