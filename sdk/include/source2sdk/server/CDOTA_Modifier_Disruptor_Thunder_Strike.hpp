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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Disruptor_Thunder_Strike : public source2sdk::client::CDOTA_Buff
        {
        public:
            float strike_interval; // 0x17f8            
            float radius; // 0x17fc            
            std::int32_t strike_damage; // 0x1800            
            std::int32_t strike_damage_bonus; // 0x1804            
            std::int32_t hits_units_inside_kinetic; // 0x1808            
            source2sdk::entity2::GameTime_t m_flGroundDelayEndTime; // 0x180c            
            bool is_thinker; // 0x1810            
            bool m_bTransferred; // 0x1811            
            uint8_t _pad1812[0x2]; // 0x1812
            std::int32_t m_nThinkerViewer; // 0x1814            
            std::int32_t m_nThinkerViewerTeam; // 0x1818            
            std::int32_t m_nStrikeCount; // 0x181c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_Thunder_Strike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Disruptor_Thunder_Strike) == 0x1820);
    };
};
