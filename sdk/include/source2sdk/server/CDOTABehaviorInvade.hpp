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
        class CDOTABehaviorInvade
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x_            
            // m_goalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_goalEntity;
            char m_goalEntity[0x_]; // 0x_            
            // m_nextGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_nextGoalEntity;
            char m_nextGoalEntity[0x_]; // 0x_            
            bool m_bReachedFinalGoal; // 0x_            
            bool m_bRequireReachingEndPath; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_MoveTo) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_goalEntity) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_nextGoalEntity) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_bReachedFinalGoal) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_bRequireReachingEndPath) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorInvade) == 0x_);
    };
};
