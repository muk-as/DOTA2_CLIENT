#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUp.hpp"
#include "source2sdk/client/ESurvivorsAttackTargeting.hpp"
#include "source2sdk/client/SurvivorsUnitID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp_ProjectileAttack : public source2sdk::client::CSurvivorsPowerUp
        {
        public:
            // m_sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticle;
            char m_sParticle[0x_]; // 0x_            
            source2sdk::client::ESurvivorsAttackTargeting m_eTargeting; // 0x_            
            source2sdk::client::ESurvivorsAttackTargeting m_eBounceTargeting; // 0x_            
            float m_flSpawnMinimumLifetime; // 0x_            
            float m_flBounceMinimumLifetime; // 0x_            
            bool m_bExpireOnWorldCollision; // 0x_            
            bool m_bAbilityActiveWhileProjectileIsActive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nActiveProjectilesToTrack; // 0x_            
            // m_vecQueuedProjectileTimers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecQueuedProjectileTimers;
            char m_vecQueuedProjectileTimers[0x_]; // 0x_            
            // m_vecTargetExclusions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsUnitID_t> m_vecTargetExclusions;
            char m_vecTargetExclusions[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_ProjectileAttack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_ProjectileAttack) == 0x_);
    };
};
