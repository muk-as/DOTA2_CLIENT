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
    // Size: 0xb8
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorAttack
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x60]; // 0x0
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0x24]; // 0x64
        server::CountdownTimer m_backSwingTimer; // 0x88        
        bool m_bCastAttack; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa1[0x3]; // 0xa1
        float m_flBackswingTime; // 0xa4        
        float m_flAnimSpeed; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xac[0xc];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorAttack, m_hTarget) == 0x60);
    static_assert(offsetof(CDOTABehaviorAttack, m_backSwingTimer) == 0x88);
    static_assert(offsetof(CDOTABehaviorAttack, m_bCastAttack) == 0xa0);
    static_assert(offsetof(CDOTABehaviorAttack, m_flBackswingTime) == 0xa4);
    static_assert(offsetof(CDOTABehaviorAttack, m_flAnimSpeed) == 0xa8);
    
    static_assert(sizeof(CDOTABehaviorAttack) == 0xb8);
};
