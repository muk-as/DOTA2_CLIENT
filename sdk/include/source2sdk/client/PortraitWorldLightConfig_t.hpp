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
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PortraitWorldLightConfig_t
        {
        public:
            CUtlString m_strName; // 0x0            
            float m_flLatitude; // 0x8            
            float m_flLongitude; // 0xc            
            float m_flIntensity; // 0x10            
            float m_flAdditionalRadius; // 0x14            
            float m_flSpotFov; // 0x18            
            float m_flAnimatedNoiseFrequency; // 0x1c            
            float m_flAnimatedNoiseMinValue; // 0x20            
            Color m_color; // 0x24            
            bool m_bShowGizmos; // 0x28            
            bool m_bShadows; // 0x29            
            uint8_t _pad002a[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_strName) == 0x0);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flLatitude) == 0x8);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flLongitude) == 0xc);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flIntensity) == 0x10);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flAdditionalRadius) == 0x14);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flSpotFov) == 0x18);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flAnimatedNoiseFrequency) == 0x1c);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_flAnimatedNoiseMinValue) == 0x20);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_color) == 0x24);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_bShowGizmos) == 0x28);
        static_assert(offsetof(source2sdk::client::PortraitWorldLightConfig_t, m_bShadows) == 0x29);
        
        static_assert(sizeof(source2sdk::client::PortraitWorldLightConfig_t) == 0x30);
    };
};
