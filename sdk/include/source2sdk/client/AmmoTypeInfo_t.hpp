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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AmmoTypeInfo_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nMaxCarry; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::tier2::CRangeInt m_nSplashSize; // 0x_            
            source2sdk::client::AmmoFlags_t m_nFlags; // 0x_            
            float m_flMass; // 0x_            
            source2sdk::tier2::CRangeFloat m_flSpeed; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AmmoTypeInfo_t, m_nMaxCarry) == 0x_);
        static_assert(offsetof(source2sdk::client::AmmoTypeInfo_t, m_nSplashSize) == 0x_);
        static_assert(offsetof(source2sdk::client::AmmoTypeInfo_t, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::AmmoTypeInfo_t, m_flMass) == 0x_);
        static_assert(offsetof(source2sdk::client::AmmoTypeInfo_t, m_flSpeed) == 0x_);
        
        static_assert(sizeof(source2sdk::client::AmmoTypeInfo_t) == 0x_);
    };
};
