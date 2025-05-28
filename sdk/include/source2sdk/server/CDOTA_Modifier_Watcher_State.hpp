#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Watcher_State : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1888[0x4]; // 0x1888
            std::int32_t m_nOwningTeamNumber; // 0x188c            
            bool m_bHasSentFirstReady; // 0x1890            
            uint8_t _pad1891[0x3]; // 0x1891
            source2sdk::entity2::GameTime_t m_flNextReadyTime; // 0x1894            
            std::uint32_t m_uFoWVisibilityMask; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Watcher_State because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Watcher_State) == 0x18a0);
    };
};
