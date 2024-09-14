#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
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
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CDOTABehaviorAttackPhase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x60]; // 0x0
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0x4]; // 0x64
        server::CountdownTimer m_attackTimer; // 0x68        
        bool m_bAttackComplete; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x81[0x27]; // 0x81
        bool m_bDeny; // 0xa8        
        bool m_bCastAttack; // 0xa9        
        bool m_bTargetTeleported; // 0xaa        
        [[maybe_unused]] std::uint8_t pad_0xab[0x1]; // 0xab
        float m_flBackswingDuration; // 0xac        
        float m_flAnimSpeed; // 0xb0        
        float m_flAttackPortionPriorToTimer; // 0xb4        
        animationsystem::HSequence m_iSequence; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0xbc[0xc];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTABehaviorAttackPhase, m_hTarget) == 0x60);
    static_assert(offsetof(CDOTABehaviorAttackPhase, m_attackTimer) == 0x68);
    static_assert(offsetof(CDOTABehaviorAttackPhase, m_bAttackComplete) == 0x80);
    static_assert(offsetof(CDOTABehaviorAttackPhase, m_bDeny) == 0xa8);
    static_assert(offsetof(CDOTABehaviorAttackPhase, m_bCastAttack) == 0xa9);
    static_assert(offsetof(CDOTABehaviorAttackPhase, m_bTargetTeleported) == 0xaa);
    static_assert(offsetof(CDOTABehaviorAttackPhase, m_flBackswingDuration) == 0xac);
    static_assert(offsetof(CDOTABehaviorAttackPhase, m_flAnimSpeed) == 0xb0);
    static_assert(offsetof(CDOTABehaviorAttackPhase, m_flAttackPortionPriorToTimer) == 0xb4);
    static_assert(offsetof(CDOTABehaviorAttackPhase, m_iSequence) == 0xb8);
    
    static_assert(sizeof(CDOTABehaviorAttackPhase) == 0xc8);
};
