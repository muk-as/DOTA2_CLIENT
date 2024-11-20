#pragma once
#include "source2sdk/client/CSurvivorsEnemy.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x438
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsEnemyAbsorber : public client::CSurvivorsEnemy
    {
    public:
        float m_flPercentHealthAbsorbed; // 0x338        
        float m_flBaseModelScale; // 0x33c        
        float m_flModelScaleIncreasePerAbsorb; // 0x340        
        float m_flMaxModelScale; // 0x344        
        float m_flAbsorbRadius; // 0x348        
        float m_flCurrentModelScale; // 0x34c        
        // m_sAbsorbParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sAbsorbParticleName;
        char m_sAbsorbParticleName[0xe0]; // 0x350        
        [[maybe_unused]] std::uint8_t pad_0x430[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsEnemyAbsorber because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsEnemyAbsorber) == 0x438);
};
