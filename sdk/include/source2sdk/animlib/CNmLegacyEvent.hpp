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
        // Size: 0x40
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmLegacyEvent : public source2sdk::animlib::CNmEvent
        {
        public:
            CUtlString m_animEventClassName; // 0x20            
            KeyValues3 m_KV; // 0x28            
            uint8_t _pad0038[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmLegacyEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmLegacyEvent) == 0x40);
    };
};
