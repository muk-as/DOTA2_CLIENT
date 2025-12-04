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
        struct CandyShopCandyType_t
        {
        public:
            // metadata: MPropertyDescription "unique integer ID of this candy type"
            // game bug: prop with no declared class info (CandyShopCandyTypeID_t)
            char m_unCandyTypeID[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "localization name of the candy type"
            CUtlString m_sLocName; // 0x_            
            // metadata: MPropertyDescription "the image used for this candy type"
            CPanoramaImageName m_sImage; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CandyShopCandyType_t, m_unCandyTypeID) == 0x_);
        static_assert(offsetof(source2sdk::client::CandyShopCandyType_t, m_sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CandyShopCandyType_t, m_sImage) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CandyShopCandyType_t) == 0x_);
    };
};
