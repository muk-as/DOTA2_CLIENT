#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticlePostProcessPriorityGroup_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x380
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderPostProcessing : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "Post Processing Strength"
        particleslib::CPerParticleFloatInput m_flPostProcessStrength; // 0x210        
        // metadata: MPropertyFriendlyName "Post Processing File"
        // metadata: MPropertyAttributeEditor "AssetBrowse( vpost, *showassetpreview )"
        // m_hPostTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostTexture;
        char m_hPostTexture[0x8]; // 0x370        
        // metadata: MPropertyFriendlyName "Post Processing Priority Group"
        particles::ParticlePostProcessPriorityGroup_t m_nPriority; // 0x378        
        [[maybe_unused]] std::uint8_t pad_0x37c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderPostProcessing because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderPostProcessing) == 0x380);
};
