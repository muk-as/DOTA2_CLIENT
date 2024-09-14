#pragma once
#include "source2sdk/animationsystem/ParticleAttachment_t.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x128
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPrecipitationVData : public client::CEntitySubclassVDataBase
    {
    public:
        // m_szParticlePrecipitationEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szParticlePrecipitationEffect;
        char m_szParticlePrecipitationEffect[0xe0]; // 0x28        
        float m_flInnerDistance; // 0x108        
        animationsystem::ParticleAttachment_t m_nAttachType; // 0x10c        
        bool m_bBatchSameVolumeType; // 0x110        
        [[maybe_unused]] std::uint8_t pad_0x111[0x3]; // 0x111
        int32_t m_nRTEnvCP; // 0x114        
        int32_t m_nRTEnvCPComponent; // 0x118        
        [[maybe_unused]] std::uint8_t pad_0x11c[0x4]; // 0x11c
        CUtlString m_szModifier; // 0x120        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPrecipitationVData because it is not a standard-layout class
    static_assert(sizeof(CPrecipitationVData) == 0x128);
};
