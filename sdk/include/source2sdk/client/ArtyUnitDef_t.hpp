#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ArtyGameObjectDef_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ArtyUnitDef_t : public source2sdk::client::ArtyGameObjectDef_t
        {
        public:
            bool m_bRotateReloadBar; // 0xb0            
            uint8_t _pad00b1[0x3]; // 0xb1
            float m_flMaxMana; // 0xb4            
            float m_flMovementSpeed; // 0xb8            
            uint8_t _pad00bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in ArtyUnitDef_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::ArtyUnitDef_t) == 0xc0);
    };
};
