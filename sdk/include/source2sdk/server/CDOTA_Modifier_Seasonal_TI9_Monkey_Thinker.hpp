#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1770
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker : public client::CDOTA_Buff
    {
    public:
        float attack_range; // 0x16e8        
        float attack_time; // 0x16ec        
        float attack_projectile_time; // 0x16f0        
        int32_t projectile_speed; // 0x16f4        
        float turn_time; // 0x16f8        
        float turn_angle; // 0x16fc        
        float shoot_angle; // 0x1700        
        float m_flTurnRate; // 0x1704        
        float m_flTargetYaw; // 0x1708        
        float m_flLastTurnTime; // 0x170c        
        entity2::GameTick_t m_nLastTickCount; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4]; // 0x1714
        bool m_bHappyMonkeyCondition; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        // m_hAngryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hAngryTarget;
        char m_hAngryTarget[0x4]; // 0x171c        
        // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hAttackTarget;
        char m_hAttackTarget[0x4]; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4]; // 0x1724
        server::CountdownTimer m_AttackTimer; // 0x1728        
        server::CountdownTimer m_AttackProjectileTimer; // 0x1740        
        server::CountdownTimer m_HappyTimer; // 0x1758        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker) == 0x1770);
};
