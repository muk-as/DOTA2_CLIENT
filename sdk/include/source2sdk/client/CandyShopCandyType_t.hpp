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
        // Size: 0x20
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
            char m_unCandyTypeID[0x1]; // 0x0            
            uint8_t _pad0001[0x7]; // 0x1
            // metadata: MPropertyDescription "localization name of the candy type"
            CUtlString m_sLocName; // 0x8            
            // metadata: MPropertyDescription "the image used for this candy type"
            CPanoramaImageName m_sImage; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CandyShopCandyType_t, m_unCandyTypeID) == 0x0);
        static_assert(offsetof(source2sdk::client::CandyShopCandyType_t, m_sLocName) == 0x8);
        static_assert(offsetof(source2sdk::client::CandyShopCandyType_t, m_sImage) == 0x10);
        
        static_assert(sizeof(source2sdk::client::CandyShopCandyType_t) == 0x20);
    };
};
