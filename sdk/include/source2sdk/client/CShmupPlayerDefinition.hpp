#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x5c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CShmupPlayerDefinition
    {
    public:
        int32_t m_nLives; // 0x0        
        float m_flModelScale; // 0x4        
        float m_flShieldRadius; // 0x8        
        float m_flHeartRadius; // 0xc        
        float m_flMaxSpeed; // 0x10        
        float m_flAccel; // 0x14        
        float m_flAttackLaunchDistance; // 0x18        
        int32_t m_nModeSwapExtraAttackCooldown; // 0x1c        
        int32_t m_nModeSwapTicks; // 0x20        
        int32_t m_nEnemyCollideDamage; // 0x24        
        int32_t m_nFireAttackCooldown; // 0x28        
        float m_flFireAttackRadius; // 0x2c        
        float m_flFireAttackSpeed; // 0x30        
        int32_t m_nIceAttackCooldown; // 0x34        
        float m_flIceAttackRadius; // 0x38        
        float m_flIceAttackSpeed; // 0x3c        
        float m_flSpecialAttackSpeed; // 0x40        
        int32_t m_nSpecialAttackDamage; // 0x44        
        int32_t m_nSpecialAttackAbsorptionCost; // 0x48        
        int32_t m_nSpecialAttackMax; // 0x4c        
        int32_t m_nTicksPerSpecialAttack; // 0x50        
        int32_t m_nMaxBulletAbsorption; // 0x54        
        float m_flBulletSpread; // 0x58        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CShmupPlayerDefinition, m_nLives) == 0x0);
    static_assert(offsetof(CShmupPlayerDefinition, m_flModelScale) == 0x4);
    static_assert(offsetof(CShmupPlayerDefinition, m_flShieldRadius) == 0x8);
    static_assert(offsetof(CShmupPlayerDefinition, m_flHeartRadius) == 0xc);
    static_assert(offsetof(CShmupPlayerDefinition, m_flMaxSpeed) == 0x10);
    static_assert(offsetof(CShmupPlayerDefinition, m_flAccel) == 0x14);
    static_assert(offsetof(CShmupPlayerDefinition, m_flAttackLaunchDistance) == 0x18);
    static_assert(offsetof(CShmupPlayerDefinition, m_nModeSwapExtraAttackCooldown) == 0x1c);
    static_assert(offsetof(CShmupPlayerDefinition, m_nModeSwapTicks) == 0x20);
    static_assert(offsetof(CShmupPlayerDefinition, m_nEnemyCollideDamage) == 0x24);
    static_assert(offsetof(CShmupPlayerDefinition, m_nFireAttackCooldown) == 0x28);
    static_assert(offsetof(CShmupPlayerDefinition, m_flFireAttackRadius) == 0x2c);
    static_assert(offsetof(CShmupPlayerDefinition, m_flFireAttackSpeed) == 0x30);
    static_assert(offsetof(CShmupPlayerDefinition, m_nIceAttackCooldown) == 0x34);
    static_assert(offsetof(CShmupPlayerDefinition, m_flIceAttackRadius) == 0x38);
    static_assert(offsetof(CShmupPlayerDefinition, m_flIceAttackSpeed) == 0x3c);
    static_assert(offsetof(CShmupPlayerDefinition, m_flSpecialAttackSpeed) == 0x40);
    static_assert(offsetof(CShmupPlayerDefinition, m_nSpecialAttackDamage) == 0x44);
    static_assert(offsetof(CShmupPlayerDefinition, m_nSpecialAttackAbsorptionCost) == 0x48);
    static_assert(offsetof(CShmupPlayerDefinition, m_nSpecialAttackMax) == 0x4c);
    static_assert(offsetof(CShmupPlayerDefinition, m_nTicksPerSpecialAttack) == 0x50);
    static_assert(offsetof(CShmupPlayerDefinition, m_nMaxBulletAbsorption) == 0x54);
    static_assert(offsetof(CShmupPlayerDefinition, m_flBulletSpread) == 0x58);
    
    static_assert(sizeof(CShmupPlayerDefinition) == 0x5c);
};
