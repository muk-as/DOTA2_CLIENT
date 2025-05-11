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
        // Size: 0x40
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct CandyShopRewardOption_t
        {
        public:
            // metadata: MPropertyDescription "A unique ID for this reward option."
            // game bug: prop with no declared class info (CandyShopRewardOptionID_t)
            char m_unRewardOptionID[0x1]; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            // metadata: MPropertyDescription "A CSS class to assign to rewards of this type"
            CUtlString m_sRewardClass; // 0x8            
            uint8_t _pad0010[0x30];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CandyShopRewardOption_t, m_unRewardOptionID) == 0x0);
        static_assert(offsetof(source2sdk::client::CandyShopRewardOption_t, m_sRewardClass) == 0x8);
        
        static_assert(sizeof(source2sdk::client::CandyShopRewardOption_t) == 0x40);
    };
};
