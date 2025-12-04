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
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PointCameraSettings_t
        {
        public:
            float m_flNearBlurryDistance; // 0x_            
            float m_flNearCrispDistance; // 0x_            
            float m_flFarCrispDistance; // 0x_            
            float m_flFarBlurryDistance; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PointCameraSettings_t, m_flNearBlurryDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::PointCameraSettings_t, m_flNearCrispDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::PointCameraSettings_t, m_flFarCrispDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::PointCameraSettings_t, m_flFarBlurryDistance) == 0x_);
        
        static_assert(sizeof(source2sdk::client::PointCameraSettings_t) == 0x_);
    };
};
