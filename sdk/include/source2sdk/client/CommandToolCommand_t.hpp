#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CommandEntitySpecType_t.hpp"
#include "source2sdk/client/CommandExecMode_t.hpp"
#include "source2sdk/client/DebugOverlayBits_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CommandToolCommand_t
        {
        public:
            bool m_bEnabled; // 0x0            
            bool m_bOpened; // 0x1            
            uint8_t _pad0002[0x2]; // 0x2
            std::uint32_t m_InternalId; // 0x4            
            CUtlString m_ShortName; // 0x8            
            source2sdk::client::CommandExecMode_t m_ExecMode; // 0x10            
            uint8_t _pad0014[0x4]; // 0x14
            CUtlString m_SpawnGroup; // 0x18            
            float m_PeriodicExecDelay; // 0x20            
            source2sdk::client::CommandEntitySpecType_t m_SpecType; // 0x24            
            CUtlString m_EntitySpec; // 0x28            
            CUtlString m_Commands; // 0x30            
            source2sdk::client::DebugOverlayBits_t m_SetDebugBits; // 0x38            
            source2sdk::client::DebugOverlayBits_t m_ClearDebugBits; // 0x40            
            uint8_t _pad0048[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CommandToolCommand_t, m_bEnabled) == 0x0);
        static_assert(offsetof(source2sdk::client::CommandToolCommand_t, m_bOpened) == 0x1);
        static_assert(offsetof(source2sdk::client::CommandToolCommand_t, m_InternalId) == 0x4);
        static_assert(offsetof(source2sdk::client::CommandToolCommand_t, m_ShortName) == 0x8);
        static_assert(offsetof(source2sdk::client::CommandToolCommand_t, m_ExecMode) == 0x10);
        static_assert(offsetof(source2sdk::client::CommandToolCommand_t, m_SpawnGroup) == 0x18);
        static_assert(offsetof(source2sdk::client::CommandToolCommand_t, m_PeriodicExecDelay) == 0x20);
        static_assert(offsetof(source2sdk::client::CommandToolCommand_t, m_SpecType) == 0x24);
        static_assert(offsetof(source2sdk::client::CommandToolCommand_t, m_EntitySpec) == 0x28);
        static_assert(offsetof(source2sdk::client::CommandToolCommand_t, m_Commands) == 0x30);
        static_assert(offsetof(source2sdk::client::CommandToolCommand_t, m_SetDebugBits) == 0x38);
        static_assert(offsetof(source2sdk::client::CommandToolCommand_t, m_ClearDebugBits) == 0x40);
        
        static_assert(sizeof(source2sdk::client::CommandToolCommand_t) == 0x50);
    };
};
