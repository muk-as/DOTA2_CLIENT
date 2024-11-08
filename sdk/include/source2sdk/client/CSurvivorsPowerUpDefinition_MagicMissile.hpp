#pragma once
#include "source2sdk/client/CSurvivorsPowerUpDefinition_ProjectileAttack.hpp"
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
    // Size: 0x888
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsPowerUpDefinition_MagicMissile : public client::CSurvivorsPowerUpDefinition_ProjectileAttack
    {
    public:
        float m_flShardDamageMultiplier; // 0x7a0        
        float m_flScepterDamageIncreasePerEnemyKilled; // 0x7a4        
        // m_sImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sImpactParticle;
        char m_sImpactParticle[0xe0]; // 0x7a8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUpDefinition_MagicMissile because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUpDefinition_MagicMissile) == 0x888);
};
