#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmEntityAttributeEventBase.hpp"

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
        class CNmEntityAttributeIntEvent : public source2sdk::animlib::CNmEntityAttributeEventBase
        {
        public:
            std::int32_t m_nIntValue; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmEntityAttributeIntEvent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmEntityAttributeIntEvent) == 0x40);
    };
};
