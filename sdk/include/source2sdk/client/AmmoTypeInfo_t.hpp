#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AmmoFlags_t.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"
#include "source2sdk/tier2/CRangeInt.hpp"

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
        // Size: 0x38
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AmmoTypeInfo_t
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            std::int32_t m_nMaxCarry; // 0x10            
            uint8_t _pad0014[0x8]; // 0x14
            source2sdk::tier2::CRangeInt m_nSplashSize; // 0x1c            
            source2sdk::client::AmmoFlags_t m_nFlags; // 0x24            
            float m_flMass; // 0x28            
            source2sdk::tier2::CRangeFloat m_flSpeed; // 0x2c            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AmmoTypeInfo_t, m_nMaxCarry) == 0x10);
        static_assert(offsetof(source2sdk::client::AmmoTypeInfo_t, m_nSplashSize) == 0x1c);
        static_assert(offsetof(source2sdk::client::AmmoTypeInfo_t, m_nFlags) == 0x24);
        static_assert(offsetof(source2sdk::client::AmmoTypeInfo_t, m_flMass) == 0x28);
        static_assert(offsetof(source2sdk::client::AmmoTypeInfo_t, m_flSpeed) == 0x2c);
        
        static_assert(sizeof(source2sdk::client::AmmoTypeInfo_t) == 0x38);
    };
};
