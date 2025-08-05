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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct BakedLightingInfo_t_BakedShadowAssignment_t
        {
        public:
            std::uint32_t m_nLightHash; // 0x0            
            std::uint32_t m_nMapHash; // 0x4            
            std::int8_t m_nShadowChannel; // 0x8            
            uint8_t _pad0009[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t_BakedShadowAssignment_t, m_nLightHash) == 0x0);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t_BakedShadowAssignment_t, m_nMapHash) == 0x4);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t_BakedShadowAssignment_t, m_nShadowChannel) == 0x8);
        
        static_assert(sizeof(source2sdk::worldrenderer::BakedLightingInfo_t_BakedShadowAssignment_t) == 0xc);
    };
};
