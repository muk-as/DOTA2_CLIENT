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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorCommandVampireThrall
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x_            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTargetRange; // 0x_            
            bool m_bDeny; // 0x_            
            bool m_bInvisBreak; // 0x_            
            bool m_bNightmareAttack; // 0x_            
            bool m_bTurningToTarget; // 0x_            
            bool m_bHasPositionOrder; // 0x_            
            bool m_bIsAggressive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTargetAngle; // 0x_            
            Vector m_vFollowOffset; // 0x_            
            Vector m_vMoveToPosition; // 0x_            
            // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMaster;
            char m_hMaster[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_MoveTo) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_hTarget) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_flTargetRange) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bDeny) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bInvisBreak) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bNightmareAttack) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bTurningToTarget) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bHasPositionOrder) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_bIsAggressive) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_flTargetAngle) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_vFollowOffset) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_vMoveToPosition) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandVampireThrall, m_hMaster) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorCommandVampireThrall) == 0x_);
    };
};
