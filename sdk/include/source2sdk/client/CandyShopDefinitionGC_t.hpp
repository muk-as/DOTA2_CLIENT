#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CandyShopRewardOptionGC_t.hpp"

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
        struct CandyShopDefinitionGC_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "unique integer ID of this candy shop"
            // game bug: prop with no declared class info (CandyShopID_t)
            char m_unCandyShopID[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecRewards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CandyShopRewardOptionGC_t> m_vecRewards;
            char m_vecRewards[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CandyShopDefinitionGC_t, m_unCandyShopID) == 0x_);
        static_assert(offsetof(source2sdk::client::CandyShopDefinitionGC_t, m_vecRewards) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CandyShopDefinitionGC_t) == 0x_);
    };
};
