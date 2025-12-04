#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorAttackPhase
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_attackTimer; // 0x_            
            bool m_bAttackComplete; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bDeny; // 0x_            
            bool m_bCastAttack; // 0x_            
            bool m_bTargetTeleported; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flBackswingDuration; // 0x_            
            float m_flAnimSpeed; // 0x_            
            float m_flAttackPortionPriorToTimer; // 0x_            
            source2sdk::animationsystem::HSequence m_iSequence; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttackPhase, m_hTarget) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttackPhase, m_attackTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttackPhase, m_bAttackComplete) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttackPhase, m_bDeny) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttackPhase, m_bCastAttack) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttackPhase, m_bTargetTeleported) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttackPhase, m_flBackswingDuration) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttackPhase, m_flAnimSpeed) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttackPhase, m_flAttackPortionPriorToTimer) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorAttackPhase, m_iSequence) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorAttackPhase) == 0x_);
    };
};
