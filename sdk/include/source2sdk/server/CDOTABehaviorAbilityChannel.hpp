#pragma once
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x88
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorAbilityChannel
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x60]; // 0x0
        server::CountdownTimer m_timer; // 0x60        
        float m_flAbilityChannelDuration; // 0x78        
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAbility;
        char m_hAbility[0x4]; // 0x7c        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x80        
        bool m_bCompletedChanneling; // 0x84        
        [[maybe_unused]] std::uint8_t pad_0x85[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorAbilityChannel, m_timer) == 0x60);
    static_assert(offsetof(CDOTABehaviorAbilityChannel, m_flAbilityChannelDuration) == 0x78);
    static_assert(offsetof(CDOTABehaviorAbilityChannel, m_hAbility) == 0x7c);
    static_assert(offsetof(CDOTABehaviorAbilityChannel, m_hTarget) == 0x80);
    static_assert(offsetof(CDOTABehaviorAbilityChannel, m_bCompletedChanneling) == 0x84);
    
    static_assert(sizeof(CDOTABehaviorAbilityChannel) == 0x88);
};
