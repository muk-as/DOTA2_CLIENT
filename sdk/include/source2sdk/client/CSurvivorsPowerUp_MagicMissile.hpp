#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUp_ProjectileAttack.hpp"
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
        class CSurvivorsPowerUp_MagicMissile : public source2sdk::client::CSurvivorsPowerUp_ProjectileAttack
        {
        public:
            std::int32_t m_nEnemiesKilled; // 0x_            
            float m_flShardDamageMultiplier; // 0x_            
            float m_flScepterDamageIncreasePerEnemyKilled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_sPhysicalWeaknessEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sPhysicalWeaknessEffect;
            char m_sPhysicalWeaknessEffect[0x_]; // 0x_            
            // m_sImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sImpactParticle;
            char m_sImpactParticle[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_MagicMissile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_MagicMissile) == 0x_);
    };
};
