#pragma once
#include "source2sdk/client/CSurvivorsPowerUpDefinition.hpp"
#include "source2sdk/client/ESurvivorsAttackTargeting.hpp"
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
    // Size: 0x7a0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsPowerUpDefinition_ProjectileAttack : public client::CSurvivorsPowerUpDefinition
    {
    public:
        // m_sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticle;
        char m_sParticle[0xe0]; // 0x6a8        
        client::ESurvivorsAttackTargeting m_eTargeting; // 0x788        
        client::ESurvivorsAttackTargeting m_eBounceTargeting; // 0x78c        
        float m_flBounceMinimumLifetime; // 0x790        
        float m_flSpawnMinimumLifetime; // 0x794        
        bool m_bExpireOnWorldCollision; // 0x798        
        bool m_bAbilityActiveWhileProjectileIsAlive; // 0x799        
        [[maybe_unused]] std::uint8_t pad_0x79a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUpDefinition_ProjectileAttack because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUpDefinition_ProjectileAttack) == 0x7a0);
};
