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
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x730
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp_ProjectileAttack : public source2sdk::client::CSurvivorsPowerUp
        {
        public:
            // m_sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticle;
            char m_sParticle[0xe0]; // 0x608            
            source2sdk::client::ESurvivorsAttackTargeting m_eTargeting; // 0x6e8            
            source2sdk::client::ESurvivorsAttackTargeting m_eBounceTargeting; // 0x6ec            
            float m_flSpawnMinimumLifetime; // 0x6f0            
            float m_flBounceMinimumLifetime; // 0x6f4            
            bool m_bExpireOnWorldCollision; // 0x6f8            
            bool m_bAbilityActiveWhileProjectileIsActive; // 0x6f9            
            uint8_t _pad06fa[0x2]; // 0x6fa
            std::int32_t m_nActiveProjectilesToTrack; // 0x6fc            
            // m_vecQueuedProjectileTimers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecQueuedProjectileTimers;
            char m_vecQueuedProjectileTimers[0x18]; // 0x700            
            // m_vecTargetExclusions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsUnitID_t> m_vecTargetExclusions;
            char m_vecTargetExclusions[0x18]; // 0x718            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_ProjectileAttack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_ProjectileAttack) == 0x730);
    };
};
