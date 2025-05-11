#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Constructor
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct CEnvWindShared_WindVariationEvent_t
        {
        public:
            float m_flWindAngleVariation; // 0x0            
            float m_flWindSpeedVariation; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CEnvWindShared_WindVariationEvent_t, m_flWindAngleVariation) == 0x0);
        static_assert(offsetof(source2sdk::server::CEnvWindShared_WindVariationEvent_t, m_flWindSpeedVariation) == 0x4);
        
        static_assert(sizeof(source2sdk::server::CEnvWindShared_WindVariationEvent_t) == 0x8);
    };
};
