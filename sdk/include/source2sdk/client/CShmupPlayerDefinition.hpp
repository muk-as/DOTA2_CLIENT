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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CShmupPlayerDefinition
        {
        public:
            std::int32_t m_nLives; // 0x_            
            std::int32_t m_nFirstTimeBonusLives; // 0x_            
            float m_flModelScale; // 0x_            
            float m_flShieldRadius; // 0x_            
            float m_flHeartRadius; // 0x_            
            float m_flMaxSpeed; // 0x_            
            float m_flAccel; // 0x_            
            float m_flAttackLaunchDistance; // 0x_            
            std::int32_t m_nModeSwapExtraAttackCooldown; // 0x_            
            std::int32_t m_nModeSwapTicks; // 0x_            
            std::int32_t m_nEnemyCollideDamage; // 0x_            
            std::int32_t m_nFireAttackCooldown; // 0x_            
            float m_flFireAttackRadius; // 0x_            
            float m_flFireAttackSpeed; // 0x_            
            std::int32_t m_nIceAttackCooldown; // 0x_            
            float m_flIceAttackRadius; // 0x_            
            float m_flIceAttackSpeed; // 0x_            
            float m_flSpecialAttackSpeed; // 0x_            
            std::int32_t m_nSpecialAttackDamage; // 0x_            
            std::int32_t m_nSpecialAttackAbsorptionCost; // 0x_            
            std::int32_t m_nSpecialAttackMax; // 0x_            
            std::int32_t m_nTicksPerSpecialAttack; // 0x_            
            std::int32_t m_nMaxBulletAbsorption; // 0x_            
            float m_flBulletSpread; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nLives) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nFirstTimeBonusLives) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flModelScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flShieldRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flHeartRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flMaxSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flAccel) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flAttackLaunchDistance) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nModeSwapExtraAttackCooldown) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nModeSwapTicks) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nEnemyCollideDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nFireAttackCooldown) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flFireAttackRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flFireAttackSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nIceAttackCooldown) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flIceAttackRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flIceAttackSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flSpecialAttackSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nSpecialAttackDamage) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nSpecialAttackAbsorptionCost) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nSpecialAttackMax) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nTicksPerSpecialAttack) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_nMaxBulletAbsorption) == 0x_);
        static_assert(offsetof(source2sdk::client::CShmupPlayerDefinition, m_flBulletSpread) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CShmupPlayerDefinition) == 0x_);
    };
};
