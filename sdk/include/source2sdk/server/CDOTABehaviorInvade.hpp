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
        // Size: 0x158
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorInvade
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            // m_goalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_goalEntity;
            char m_goalEntity[0x4]; // 0x148            
            // m_nextGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_nextGoalEntity;
            char m_nextGoalEntity[0x4]; // 0x14c            
            bool m_bReachedFinalGoal; // 0x150            
            bool m_bRequireReachingEndPath; // 0x151            
            uint8_t _pad0152[0x6];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_goalEntity) == 0x148);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_nextGoalEntity) == 0x14c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_bReachedFinalGoal) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorInvade, m_bRequireReachingEndPath) == 0x151);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorInvade) == 0x158);
    };
};
