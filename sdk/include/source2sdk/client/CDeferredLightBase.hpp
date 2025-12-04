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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Color m_LightColor"
        // static metadata: MNetworkVarNames "float m_flIntensity"
        // static metadata: MNetworkVarNames "float m_flLightSize"
        // static metadata: MNetworkVarNames "float m_flSpotFoV"
        // static metadata: MNetworkVarNames "QAngle m_vLightDirection"
        // static metadata: MNetworkVarNames "float m_flStartFalloff"
        // static metadata: MNetworkVarNames "float m_flDistanceFalloff"
        // static metadata: MNetworkVarNames "uint m_nFlags"
        // static metadata: MNetworkVarNames "char m_ProjectedTextureName"
        #pragma pack(push, 1)
        class CDeferredLightBase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            Color m_LightColor; // 0x_            
            // metadata: MNetworkEnable
            float m_flIntensity; // 0x_            
            // metadata: MNetworkEnable
            float m_flLightSize; // 0x_            
            // metadata: MNetworkEnable
            float m_flSpotFoV; // 0x_            
            // metadata: MNetworkEnable
            QAngle m_vLightDirection; // 0x_            
            // metadata: MNetworkEnable
            float m_flStartFalloff; // 0x_            
            // metadata: MNetworkEnable
            float m_flDistanceFalloff; // 0x_            
            // metadata: MNetworkEnable
            std::uint32_t m_nFlags; // 0x_            
            // metadata: MNetworkEnable
            char m_ProjectedTextureName[512]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // float m_flAnimatedNoiseFrequency; // 0x_
            // float m_flAnimatedNoiseSpeed; // 0x_
            // float m_flAnimatedNoiseMin; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_LightColor) == 0x_);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_flIntensity) == 0x_);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_flLightSize) == 0x_);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_flSpotFoV) == 0x_);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_vLightDirection) == 0x_);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_flStartFalloff) == 0x_);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_flDistanceFalloff) == 0x_);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::client::CDeferredLightBase, m_ProjectedTextureName) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDeferredLightBase) == 0x_);
    };
};
