#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x60
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupPlayerDefinition
        {
        public:
            std::int32_t m_nLives; // 0x0            
            std::int32_t m_nFirstTimeBonusLives; // 0x4            
            float m_flModelScale; // 0x8            
            float m_flShieldRadius; // 0xc            
            float m_flHeartRadius; // 0x10            
            float m_flMaxSpeed; // 0x14            
            float m_flAccel; // 0x18            
            float m_flAttackLaunchDistance; // 0x1c            
            std::int32_t m_nModeSwapExtraAttackCooldown; // 0x20            
            std::int32_t m_nModeSwapTicks; // 0x24            
            std::int32_t m_nEnemyCollideDamage; // 0x28            
            std::int32_t m_nFireAttackCooldown; // 0x2c            
            float m_flFireAttackRadius; // 0x30            
            float m_flFireAttackSpeed; // 0x34            
            std::int32_t m_nIceAttackCooldown; // 0x38            
            float m_flIceAttackRadius; // 0x3c            
            float m_flIceAttackSpeed; // 0x40            
            float m_flSpecialAttackSpeed; // 0x44            
            std::int32_t m_nSpecialAttackDamage; // 0x48            
            std::int32_t m_nSpecialAttackAbsorptionCost; // 0x4c            
            std::int32_t m_nSpecialAttackMax; // 0x50            
            std::int32_t m_nTicksPerSpecialAttack; // 0x54            
            std::int32_t m_nMaxBulletAbsorption; // 0x58            
            float m_flBulletSpread; // 0x5c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nLives) == 0x0);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nFirstTimeBonusLives) == 0x4);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flModelScale) == 0x8);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flShieldRadius) == 0xc);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flHeartRadius) == 0x10);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flMaxSpeed) == 0x14);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flAccel) == 0x18);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flAttackLaunchDistance) == 0x1c);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nModeSwapExtraAttackCooldown) == 0x20);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nModeSwapTicks) == 0x24);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nEnemyCollideDamage) == 0x28);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nFireAttackCooldown) == 0x2c);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flFireAttackRadius) == 0x30);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flFireAttackSpeed) == 0x34);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nIceAttackCooldown) == 0x38);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flIceAttackRadius) == 0x3c);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flIceAttackSpeed) == 0x40);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flSpecialAttackSpeed) == 0x44);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nSpecialAttackDamage) == 0x48);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nSpecialAttackAbsorptionCost) == 0x4c);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nSpecialAttackMax) == 0x50);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nTicksPerSpecialAttack) == 0x54);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nMaxBulletAbsorption) == 0x58);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flBulletSpread) == 0x5c);
        
        static_assert(sizeof(source2sdk::client::CShmupPlayerDefinition) == 0x60);
    };
};
