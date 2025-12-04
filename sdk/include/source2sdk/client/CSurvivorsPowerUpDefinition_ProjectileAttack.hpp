#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUpDefinition.hpp"
#include "source2sdk/client/ESurvivorsAttackTargeting.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsPowerUpDefinition_ProjectileAttack : public source2sdk::client::CSurvivorsPowerUpDefinition
        {
        public:
            source2sdk::client::ESurvivorsAttackTargeting m_eTargeting; // 0x_            
            source2sdk::client::ESurvivorsAttackTargeting m_eBounceTargeting; // 0x_            
            float m_flBounceMinimumLifetime; // 0x_            
            float m_flSpawnMinimumLifetime; // 0x_            
            bool m_bExpireOnWorldCollision; // 0x_            
            bool m_bAbilityActiveWhileProjectileIsAlive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticle;
            char m_sParticle[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUpDefinition_ProjectileAttack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUpDefinition_ProjectileAttack) == 0x_);
    };
};
