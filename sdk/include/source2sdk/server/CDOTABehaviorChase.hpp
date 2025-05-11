#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x178
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorChase
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            // m_hChaseEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hChaseEntity;
            char m_hChaseEntity[0x4]; // 0x148            
            bool m_bTargetMoves; // 0x14c            
            uint8_t _pad014d[0x3]; // 0x14d
            float m_flFollowDistance[2]; // 0x150            
            float m_flForwardDistance; // 0x158            
            float m_flRightDistance; // 0x15c            
            source2sdk::server::CountdownTimer m_PositionFuzziness; // 0x160            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorChase, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorChase, m_hChaseEntity) == 0x148);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorChase, m_bTargetMoves) == 0x14c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorChase, m_flFollowDistance) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorChase, m_flForwardDistance) == 0x158);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorChase, m_flRightDistance) == 0x15c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorChase, m_PositionFuzziness) == 0x160);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorChase) == 0x178);
    };
};
