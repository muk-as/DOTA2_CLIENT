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
    class CSurvivorsEnemyResurrector : public client::CSurvivorsEnemy
    {
    public:
        int32_t m_nTotalResurrections; // 0x338        
        int32_t m_nResurrectionsRemaining; // 0x33c        
        float m_flMovementSpeedMultiplierPerDeath; // 0x340        
        bool m_bIsDyingWithResurrection; // 0x344        
        bool m_bIsResurrecting; // 0x345        
        [[maybe_unused]] std::uint8_t pad_0x346[0x2]; // 0x346
        // m_sResurrectParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sResurrectParticleName;
        char m_sResurrectParticleName[0xe0]; // 0x348        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsEnemyResurrector because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsEnemyResurrector) == 0x428);
};
