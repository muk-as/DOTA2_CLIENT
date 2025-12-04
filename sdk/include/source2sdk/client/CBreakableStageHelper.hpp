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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class CBreakableStageHelper
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nCurrentStage; // 0x_            
            std::int32_t m_nStageCount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBreakableStageHelper, m_nCurrentStage) == 0x_);
        static_assert(offsetof(source2sdk::client::CBreakableStageHelper, m_nStageCount) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CBreakableStageHelper) == 0x_);
    };
};
