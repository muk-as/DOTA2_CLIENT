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
    // Size: 0x428
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsEnemyAbsorber : public client::CSurvivorsEnemy
    {
    public:
        float m_flPercentHealthAbsorbed; // 0x328        
        float m_flBaseModelScale; // 0x32c        
        float m_flModelScaleIncreasePerAbsorb; // 0x330        
        float m_flMaxModelScale; // 0x334        
        float m_flAbsorbRadius; // 0x338        
        float m_flCurrentModelScale; // 0x33c        
        // m_sAbsorbParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sAbsorbParticleName;
        char m_sAbsorbParticleName[0xe0]; // 0x340        
        [[maybe_unused]] std::uint8_t pad_0x420[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsEnemyAbsorber because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsEnemyAbsorber) == 0x428);
};
