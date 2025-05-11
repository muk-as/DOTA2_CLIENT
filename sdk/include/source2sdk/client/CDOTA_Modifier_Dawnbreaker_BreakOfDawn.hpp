#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Dawnbreaker_BreakOfDawn : public source2sdk::client::CDOTA_Buff
        {
        public:
            float reveal_duration; // 0x17f8            
            float conceal_duration; // 0x17fc            
            float think_interval; // 0x1800            
            float reveal_linger; // 0x1804            
            float reveal_radius; // 0x1808            
            float m_flBonusVisionRadius; // 0x180c            
            source2sdk::entity2::GameTime_t m_flRevealExpansionTime; // 0x1810            
            source2sdk::entity2::GameTime_t m_flFullRevealLinger; // 0x1814            
            source2sdk::entity2::GameTime_t m_flConcealTime; // 0x1818            
            bool m_bWasDayTime; // 0x181c            
            uint8_t _pad181d[0x3]; // 0x181d
            std::int32_t m_nDaytimeCycles; // 0x1820            
            uint8_t _pad1824[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_BreakOfDawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Dawnbreaker_BreakOfDawn) == 0x1828);
    };
};
