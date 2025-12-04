#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct BakedLightingInfo_t_BakedShadowAssignment_t
        {
        public:
            std::uint32_t m_nLightHash; // 0x_            
            std::uint32_t m_nMapHash; // 0x_            
            std::int8_t m_nShadowChannel; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t_BakedShadowAssignment_t, m_nLightHash) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t_BakedShadowAssignment_t, m_nMapHash) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t_BakedShadowAssignment_t, m_nShadowChannel) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::BakedLightingInfo_t_BakedShadowAssignment_t) == 0x_);
    };
};
