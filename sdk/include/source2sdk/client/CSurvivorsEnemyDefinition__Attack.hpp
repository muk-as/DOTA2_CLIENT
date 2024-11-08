#pragma once
#include "source2sdk/client/GameActivity_t.hpp"
#include "source2sdk/client/SurvivorsAttackIndicatorShape_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x118
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSurvivorsEnemyDefinition__Attack
    {
    public:
        // m_sParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticleName;
        char m_sParticleName[0xe0]; // 0x0        
        float m_flDamage; // 0xe0        
        float m_flAttackCooldown; // 0xe4        
        float m_flSpeed; // 0xe8        
        float m_flRange; // 0xec        
        float m_flMaxDistance; // 0xf0        
        float m_flLifeTime; // 0xf4        
        float m_flAttackOffsetUp; // 0xf8        
        float m_flAttackOffsetForward; // 0xfc        
        float m_flRadius; // 0x100        
        client::GameActivity_t m_activity; // 0x104        
        float m_flAttackPoint; // 0x108        
        bool m_bHasIndicator; // 0x10c        
        [[maybe_unused]] std::uint8_t pad_0x10d[0x3]; // 0x10d
        float m_flSpawnDelay; // 0x110        
        client::SurvivorsAttackIndicatorShape_t m_eIndicatorShape; // 0x114        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_sParticleName) == 0x0);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_flDamage) == 0xe0);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_flAttackCooldown) == 0xe4);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_flSpeed) == 0xe8);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_flRange) == 0xec);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_flMaxDistance) == 0xf0);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_flLifeTime) == 0xf4);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_flAttackOffsetUp) == 0xf8);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_flAttackOffsetForward) == 0xfc);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_flRadius) == 0x100);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_activity) == 0x104);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_flAttackPoint) == 0x108);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_bHasIndicator) == 0x10c);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_flSpawnDelay) == 0x110);
    static_assert(offsetof(CSurvivorsEnemyDefinition__Attack, m_eIndicatorShape) == 0x114);
    
    static_assert(sizeof(CSurvivorsEnemyDefinition__Attack) == 0x118);
};
