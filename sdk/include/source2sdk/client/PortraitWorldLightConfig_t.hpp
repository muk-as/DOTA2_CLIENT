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
        #pragma pack(push, 1)
        struct PortraitWorldLightConfig_t
        {
        public:
            CUtlString m_strName; // 0x_            
            float m_flLatitude; // 0x_            
            float m_flLongitude; // 0x_            
            float m_flIntensity; // 0x_            
            float m_flAdditionalRadius; // 0x_            
            float m_flSpotFov; // 0x_            
            float m_flAnimatedNoiseFrequency; // 0x_            
            float m_flAnimatedNoiseMinValue; // 0x_            
            Color m_color; // 0x_            
            bool m_bShowGizmos; // 0x_            
            bool m_bShadows; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_strName) == 0x_);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flLatitude) == 0x_);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flLongitude) == 0x_);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flIntensity) == 0x_);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flAdditionalRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flSpotFov) == 0x_);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flAnimatedNoiseFrequency) == 0x_);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flAnimatedNoiseMinValue) == 0x_);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_color) == 0x_);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_bShowGizmos) == 0x_);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_bShadows) == 0x_);
        
        static_assert(sizeof(source2sdk::client::PortraitWorldLightConfig_t) == 0x_);
    };
};
