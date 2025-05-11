#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"
#include "source2sdk/server/CountdownTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x19a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_HallofFame : public source2sdk::server::CDOTA_BaseNPC_Building
        {
        public:
            uint8_t _pad1970[0x10]; // 0x1970
            std::int32_t m_event_dota_player_team_changed; // 0x1980            
            uint8_t _pad1984[0x4]; // 0x1984
            source2sdk::server::CountdownTimer m_glowThinkTimer; // 0x1988            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_HallofFame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_HallofFame) == 0x19a0);
    };
};
