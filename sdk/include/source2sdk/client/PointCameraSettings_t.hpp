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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x10
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PointCameraSettings_t
        {
        public:
            float m_flNearBlurryDistance; // 0x0            
            float m_flNearCrispDistance; // 0x4            
            float m_flFarCrispDistance; // 0x8            
            float m_flFarBlurryDistance; // 0xc            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PointCameraSettings_t, m_flNearBlurryDistance) == 0x0);
        static_assert(offsetof(source2sdk::client::PointCameraSettings_t, m_flNearCrispDistance) == 0x4);
        static_assert(offsetof(source2sdk::client::PointCameraSettings_t, m_flFarCrispDistance) == 0x8);
        static_assert(offsetof(source2sdk::client::PointCameraSettings_t, m_flFarBlurryDistance) == 0xc);
        
        static_assert(sizeof(source2sdk::client::PointCameraSettings_t) == 0x10);
    };
};
