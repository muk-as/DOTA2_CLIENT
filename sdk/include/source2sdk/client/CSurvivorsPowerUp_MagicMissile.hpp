#pragma once
#include "source2sdk/client/CSurvivorsPowerUp_ProjectileAttack.hpp"
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
    // Size: 0x900
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsPowerUp_MagicMissile : public client::CSurvivorsPowerUp_ProjectileAttack
    {
    public:
        int32_t m_nEnemiesKilled; // 0x730        
        float m_flShardDamageMultiplier; // 0x734        
        float m_flScepterDamageIncreasePerEnemyKilled; // 0x738        
        [[maybe_unused]] std::uint8_t pad_0x73c[0x4]; // 0x73c
        // m_sPhysicalWeaknessEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sPhysicalWeaknessEffect;
        char m_sPhysicalWeaknessEffect[0xe0]; // 0x740        
        // m_sImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sImpactParticle;
        char m_sImpactParticle[0xe0]; // 0x820        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUp_MagicMissile because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUp_MagicMissile) == 0x900);
};
