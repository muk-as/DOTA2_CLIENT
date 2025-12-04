#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/GameActivity_t.hpp"
#include "source2sdk/client/SurvivorsAttackIndicatorShape_t.hpp"
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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSurvivorsEnemyDefinition_Attack
        {
        public:
            // m_sParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticleName;
            char m_sParticleName[0x_]; // 0x_            
            float m_flDamage; // 0x_            
            float m_flAttackCooldown; // 0x_            
            float m_flSpeed; // 0x_            
            float m_flRange; // 0x_            
            float m_flMaxDistance; // 0x_            
            float m_flLifeTime; // 0x_            
            float m_flAttackOffsetUp; // 0x_            
            float m_flAttackOffsetForward; // 0x_            
            float m_flRadius; // 0x_            
            source2sdk::client::GameActivity_t m_activity; // 0x_            
            float m_flAttackPoint; // 0x_            
            bool m_bHasIndicator; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flSpawnDelay; // 0x_            
            source2sdk::client::SurvivorsAttackIndicatorShape_t m_eIndicatorShape; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_sParticleName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_flDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_flAttackCooldown) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_flSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_flRange) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_flMaxDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_flLifeTime) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_flAttackOffsetUp) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_flAttackOffsetForward) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_flRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_activity) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_flAttackPoint) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_bHasIndicator) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_flSpawnDelay) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsEnemyDefinition_Attack, m_eIndicatorShape) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsEnemyDefinition_Attack) == 0x_);
    };
};
