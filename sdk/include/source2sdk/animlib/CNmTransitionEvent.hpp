#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmEvent.hpp"
#include "source2sdk/animlib/NmTransitionRule_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x28
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmTransitionEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            source2sdk::animlib::NmTransitionRule_t m_rule; // 0x18            
            uint8_t _pad0019[0x7]; // 0x19
            CGlobalSymbol m_ID; // 0x20            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmTransitionEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmTransitionEvent) == 0x28);
    };
};
