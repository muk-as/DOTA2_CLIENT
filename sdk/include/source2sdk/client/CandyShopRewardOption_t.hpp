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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            char m_unRewardOptionID[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "A CSS class to assign to rewards of this type"
            CUtlString m_sRewardClass; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CandyShopRewardOption_t, m_unRewardOptionID) == 0x_);
        static_assert(offsetof(source2sdk::client::CandyShopRewardOption_t, m_sRewardClass) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CandyShopRewardOption_t) == 0x_);
    };
};
