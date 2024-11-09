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
    // Size: 0x418
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsEnemyResurrector : public client::CSurvivorsEnemy
    {
    public:
        int32_t m_nTotalResurrections; // 0x328        
        int32_t m_nResurrectionsRemaining; // 0x32c        
        float m_flMovementSpeedMultiplierPerDeath; // 0x330        
        bool m_bIsDyingWithResurrection; // 0x334        
        bool m_bIsResurrecting; // 0x335        
        [[maybe_unused]] std::uint8_t pad_0x336[0x2]; // 0x336
        // m_sResurrectParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sResurrectParticleName;
        char m_sResurrectParticleName[0xe0]; // 0x338        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsEnemyResurrector because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsEnemyResurrector) == 0x418);
};
