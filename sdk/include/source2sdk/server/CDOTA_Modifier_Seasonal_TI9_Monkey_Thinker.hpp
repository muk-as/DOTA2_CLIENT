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
    // Size: 0x1790
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker : public client::CDOTA_Buff
    {
    public:
        float attack_range; // 0x1708        
        float attack_time; // 0x170c        
        float attack_projectile_time; // 0x1710        
        int32_t projectile_speed; // 0x1714        
        float turn_time; // 0x1718        
        float turn_angle; // 0x171c        
        float shoot_angle; // 0x1720        
        float m_flTurnRate; // 0x1724        
        float m_flTargetYaw; // 0x1728        
        float m_flLastTurnTime; // 0x172c        
        entity2::GameTick_t m_nLastTickCount; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4]; // 0x1734
        bool m_bHappyMonkeyCondition; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1739[0x3]; // 0x1739
        // m_hAngryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hAngryTarget;
        char m_hAngryTarget[0x4]; // 0x173c        
        // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hAttackTarget;
        char m_hAttackTarget[0x4]; // 0x1740        
        [[maybe_unused]] std::uint8_t pad_0x1744[0x4]; // 0x1744
        server::CountdownTimer m_AttackTimer; // 0x1748        
        server::CountdownTimer m_AttackProjectileTimer; // 0x1760        
        server::CountdownTimer m_HappyTimer; // 0x1778        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Seasonal_TI9_Monkey_Thinker) == 0x1790);
};
