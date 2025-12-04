#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticlePostProcessPriorityGroup_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderPostProcessing : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "Post Processing Strength"
            source2sdk::particleslib::CPerParticleFloatInput m_flPostProcessStrength; // 0x_            
            // metadata: MPropertyFriendlyName "Post Processing File"
            // metadata: MPropertyAttributeEditor "AssetBrowse( vpost, *showassetpreview )"
            // m_hPostTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostTexture;
            char m_hPostTexture[0x_]; // 0x_            
            // metadata: MPropertyFriendlyName "Post Processing Priority Group"
            source2sdk::particles::ParticlePostProcessPriorityGroup_t m_nPriority; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderPostProcessing because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderPostProcessing) == 0x_);
    };
};
