#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1910
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_range; // 0x1888            
            float attack_time; // 0x188c            
            float attack_projectile_time; // 0x1890            
            std::int32_t projectile_speed; // 0x1894            
            float turn_time; // 0x1898            
            float turn_angle; // 0x189c            
            float shoot_angle; // 0x18a0            
            float m_flTurnRate; // 0x18a4            
            float m_flTargetYaw; // 0x18a8            
            float m_flLastTurnTime; // 0x18ac            
            source2sdk::entity2::GameTick_t m_nLastTickCount; // 0x18b0            
            uint8_t _pad18b4[0x4]; // 0x18b4
            bool m_bHappyMonkeyCondition; // 0x18b8            
            uint8_t _pad18b9[0x3]; // 0x18b9
            // m_hAngryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hAngryTarget;
            char m_hAngryTarget[0x4]; // 0x18bc            
            // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hAttackTarget;
            char m_hAttackTarget[0x4]; // 0x18c0            
            uint8_t _pad18c4[0x4]; // 0x18c4
            source2sdk::server::CountdownTimer m_AttackTimer; // 0x18c8            
            source2sdk::server::CountdownTimer m_AttackProjectileTimer; // 0x18e0            
            source2sdk::server::CountdownTimer m_HappyTimer; // 0x18f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker) == 0x1910);
    };
};
