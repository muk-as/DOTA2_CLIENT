#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmEvent.hpp"

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
        // Size: 0x20
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmIDEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            CGlobalSymbol m_ID; // 0x18            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmIDEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmIDEvent) == 0x20);
    };
};
