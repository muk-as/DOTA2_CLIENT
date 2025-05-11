#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x168
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorCommandMoveToTargetToCast
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x148            
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAbility;
            char m_hAbility[0x4]; // 0x14c            
            std::int32_t m_nMovementState; // 0x150            
            bool m_bFailedCast; // 0x154            
            uint8_t _pad0155[0x3]; // 0x155
            float m_flTargetRange; // 0x158            
            bool m_bTurningToTarget; // 0x15c            
            uint8_t _pad015d[0x3]; // 0x15d
            float m_flTargetAngle; // 0x160            
            uint8_t _pad0164[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToCast, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToCast, m_hTarget) == 0x148);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToCast, m_hAbility) == 0x14c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToCast, m_nMovementState) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToCast, m_bFailedCast) == 0x154);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToCast, m_flTargetRange) == 0x158);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToCast, m_bTurningToTarget) == 0x15c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToCast, m_flTargetAngle) == 0x160);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorCommandMoveToTargetToCast) == 0x168);
    };
};
