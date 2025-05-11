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
        // Size: 0x160
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorCommandMoveToPositionToCast
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            Vector m_vPosition; // 0x148            
            // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAbility;
            char m_hAbility[0x4]; // 0x154            
            bool m_bTurningToTarget; // 0x158            
            uint8_t _pad0159[0x3]; // 0x159
            float m_flTargetAngle; // 0x15c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToPositionToCast, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToPositionToCast, m_vPosition) == 0x148);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToPositionToCast, m_hAbility) == 0x154);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToPositionToCast, m_bTurningToTarget) == 0x158);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToPositionToCast, m_flTargetAngle) == 0x15c);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorCommandMoveToPositionToCast) == 0x160);
    };
};
