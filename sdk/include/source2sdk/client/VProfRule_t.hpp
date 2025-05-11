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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x18
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VProfRule_t
        {
        public:
            CUtlString strVProfName; // 0x0            
            CUtlString strDesc; // 0x8            
            float flTimeMaxMS; // 0x10            
            uint8_t _pad0014[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::VProfRule_t, strVProfName) == 0x0);
        static_assert(offsetof(source2sdk::client::VProfRule_t, strDesc) == 0x8);
        static_assert(offsetof(source2sdk::client::VProfRule_t, flTimeMaxMS) == 0x10);
        
        static_assert(sizeof(source2sdk::client::VProfRule_t) == 0x18);
    };
};
