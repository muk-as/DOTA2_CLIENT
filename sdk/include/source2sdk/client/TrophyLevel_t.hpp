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
        struct TrophyLevel_t
        {
        public:
            // metadata: MPropertyDescription "the score at which this level is unlocked"
            std::uint32_t m_nScore; // 0x_            
            // metadata: MPropertyDescription "points to award for achieving this trophy level"
            std::int32_t m_nBadgePoints; // 0x_            
            // metadata: MPropertyDescription "the image used to represent this level"
            CPanoramaImageName m_sImage; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::TrophyLevel_t, m_nScore) == 0x_);
        static_assert(offsetof(source2sdk::client::TrophyLevel_t, m_nBadgePoints) == 0x_);
        static_assert(offsetof(source2sdk::client::TrophyLevel_t, m_sImage) == 0x_);
        
        static_assert(sizeof(source2sdk::client::TrophyLevel_t) == 0x_);
    };
};
