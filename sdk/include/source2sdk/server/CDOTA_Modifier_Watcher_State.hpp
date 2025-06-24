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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Watcher_State : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1878[0x4]; // 0x1878
            std::int32_t m_nOwningTeamNumber; // 0x187c            
            bool m_bHasSentFirstReady; // 0x1880            
            uint8_t _pad1881[0x3]; // 0x1881
            source2sdk::entity2::GameTime_t m_flNextReadyTime; // 0x1884            
            std::uint32_t m_uFoWVisibilityMask; // 0x1888            
            std::int32_t m_nCapturingUnitCount; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Watcher_State because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Watcher_State) == 0x1890);
    };
};
