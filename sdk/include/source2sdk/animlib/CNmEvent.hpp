#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmEvent
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float m_flStartTimeSeconds; // 0x_            
            float m_flDurationSeconds; // 0x_            
            CGlobalSymbol m_syncID; // 0x_            
            bool m_bClientOnly; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmEvent, m_flStartTimeSeconds) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmEvent, m_flDurationSeconds) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmEvent, m_syncID) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmEvent, m_bClientOnly) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmEvent) == 0x_);
    };
};
