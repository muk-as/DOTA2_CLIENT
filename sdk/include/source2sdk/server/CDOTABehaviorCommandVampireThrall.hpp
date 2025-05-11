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
        // Size: 0x180
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorCommandVampireThrall
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x148            
            uint8_t _pad014c[0x4]; // 0x14c
            float m_flTargetRange; // 0x150            
            bool m_bDeny; // 0x154            
            bool m_bInvisBreak; // 0x155            
            bool m_bNightmareAttack; // 0x156            
            bool m_bTurningToTarget; // 0x157            
            bool m_bHasPositionOrder; // 0x158            
            bool m_bIsAggressive; // 0x159            
            uint8_t _pad015a[0x2]; // 0x15a
            float m_flTargetAngle; // 0x15c            
            Vector m_vFollowOffset; // 0x160            
            Vector m_vMoveToPosition; // 0x16c            
            // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMaster;
            char m_hMaster[0x4]; // 0x178            
            uint8_t _pad017c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_hTarget) == 0x148);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_flTargetRange) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bDeny) == 0x154);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bInvisBreak) == 0x155);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bNightmareAttack) == 0x156);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bTurningToTarget) == 0x157);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bHasPositionOrder) == 0x158);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bIsAggressive) == 0x159);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_flTargetAngle) == 0x15c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_vFollowOffset) == 0x160);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_vMoveToPosition) == 0x16c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_hMaster) == 0x178);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorCommandVampireThrall) == 0x180);
    };
};
