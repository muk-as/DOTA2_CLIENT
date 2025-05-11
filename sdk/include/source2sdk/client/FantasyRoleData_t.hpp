#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FantasyPlayerData_t.hpp"
#include "source2sdk/client/Fantasy_Roles.hpp"

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
        // Size: 0x20
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyAutoExpandSelf
        #pragma pack(push, 1)
        struct FantasyRoleData_t
        {
        public:
            // metadata: MPropertyDescription "What role are these players for"
            source2sdk::client::Fantasy_Roles m_eRole; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // metadata: MPropertyDescription "List of Pro Players for the role"
            // m_vecPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::FantasyPlayerData_t> m_vecPlayers;
            char m_vecPlayers[0x18]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::FantasyRoleData_t, m_eRole) == 0x0);
        static_assert(offsetof(source2sdk::client::FantasyRoleData_t, m_vecPlayers) == 0x8);
        
        static_assert(sizeof(source2sdk::client::FantasyRoleData_t) == 0x20);
    };
};
