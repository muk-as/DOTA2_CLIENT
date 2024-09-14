#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x2a0
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        // metadata: MNetworkEnable
        Color m_LightColor; // 0x10        
        // metadata: MNetworkEnable
        float m_flIntensity; // 0x14        
        // metadata: MNetworkEnable
        float m_flLightSize; // 0x18        
        // metadata: MNetworkEnable
        float m_flSpotFoV; // 0x1c        
        // metadata: MNetworkEnable
        QAngle m_vLightDirection; // 0x20        
        // metadata: MNetworkEnable
        float m_flStartFalloff; // 0x2c        
        // metadata: MNetworkEnable
        float m_flDistanceFalloff; // 0x30        
        // metadata: MNetworkEnable
        uint32_t m_nFlags; // 0x34        
        // metadata: MNetworkEnable
        char m_ProjectedTextureName[512]; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x238[0x68];
        
        // Datamap fields:
        // float m_flAnimatedNoiseFrequency; // 0x25c
        // float m_flAnimatedNoiseSpeed; // 0x260
        // float m_flAnimatedNoiseMin; // 0x264
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDeferredLightBase, m_LightColor) == 0x10);
    static_assert(offsetof(CDeferredLightBase, m_flIntensity) == 0x14);
    static_assert(offsetof(CDeferredLightBase, m_flLightSize) == 0x18);
    static_assert(offsetof(CDeferredLightBase, m_flSpotFoV) == 0x1c);
    static_assert(offsetof(CDeferredLightBase, m_vLightDirection) == 0x20);
    static_assert(offsetof(CDeferredLightBase, m_flStartFalloff) == 0x2c);
    static_assert(offsetof(CDeferredLightBase, m_flDistanceFalloff) == 0x30);
    static_assert(offsetof(CDeferredLightBase, m_nFlags) == 0x34);
    static_assert(offsetof(CDeferredLightBase, m_ProjectedTextureName) == 0x38);
    
    static_assert(sizeof(CDeferredLightBase) == 0x2a0);
};
