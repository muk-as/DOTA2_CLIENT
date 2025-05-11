#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x10
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FeProxyVertexMap_t
        {
        public:
            CUtlString m_Name; // 0x0            
            float m_flWeight; // 0x8            
            uint8_t _pad000c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::FeProxyVertexMap_t, m_Name) == 0x0);
        static_assert(offsetof(source2sdk::physicslib::FeProxyVertexMap_t, m_flWeight) == 0x8);
        
        static_assert(sizeof(source2sdk::physicslib::FeProxyVertexMap_t) == 0x10);
    };
};
