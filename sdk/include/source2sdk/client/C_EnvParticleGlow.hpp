#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_ParticleSystem.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "float32 m_flAlphaScale"
        // static metadata: MNetworkVarNames "float32 m_flRadiusScale"
        // static metadata: MNetworkVarNames "float32 m_flSelfIllumScale"
        // static metadata: MNetworkVarNames "Color m_ColorTint"
        // static metadata: MNetworkVarNames "HRenderTextureStrong m_hTextureOverride"
        #pragma pack(push, 1)
        class C_EnvParticleGlow : public source2sdk::client::C_ParticleSystem
        {
        public:
            // metadata: MNetworkEnable
            float m_flAlphaScale; // 0x_            
            // metadata: MNetworkEnable
            float m_flRadiusScale; // 0x_            
            // metadata: MNetworkEnable
            float m_flSelfIllumScale; // 0x_            
            // metadata: MNetworkEnable
            Color m_ColorTint; // 0x_            
            // metadata: MNetworkEnable
            // m_hTextureOverride has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_hTextureOverride;
            char m_hTextureOverride[0x_]; // 0x_            
            
            // Datamap fields:
            // float InputSetScale; // 0x_
            // float InputSetAlphaScale; // 0x_
            // Color InputSetColorTint; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvParticleGlow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvParticleGlow) == 0x_);
    };
};
