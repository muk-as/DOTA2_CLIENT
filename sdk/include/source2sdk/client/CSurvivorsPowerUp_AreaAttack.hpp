#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsAttackParticleInfo.hpp"
#include "source2sdk/client/CSurvivorsPowerUp.hpp"
#include "source2sdk/client/CSurvivorsPowerUpDamageTickInfo.hpp"
#include "source2sdk/client/ESurvivorsAreaAttackOrigin.hpp"
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
        // Size: 0x800
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp_AreaAttack : public source2sdk::client::CSurvivorsPowerUp
        {
        public:
            // m_sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticle;
            char m_sParticle[0xe0]; // 0x608            
            // m_sHitImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sHitImpactParticle;
            char m_sHitImpactParticle[0xe0]; // 0x6e8            
            // m_vecQueuedDamageTicks has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsPowerUpDamageTickInfo> m_vecQueuedDamageTicks;
            char m_vecQueuedDamageTicks[0x18]; // 0x7c8            
            source2sdk::client::ESurvivorsAreaAttackOrigin m_eOrigin; // 0x7e0            
            float m_flRemoveParticleTimeDelay; // 0x7e4            
            // m_vecAttackParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsAttackParticleInfo> m_vecAttackParticles;
            char m_vecAttackParticles[0x18]; // 0x7e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_AreaAttack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_AreaAttack) == 0x800);
    };
};
