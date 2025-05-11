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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nDamageAbsorbed; // 0x17f8            
            bool m_bStartedTimer; // 0x17fc            
            uint8_t _pad17fd[0x3]; // 0x17fd
            source2sdk::entity2::GameTime_t m_timeLastDamage; // 0x1800            
            std::int32_t bonus_hp_regen; // 0x1804            
            std::int32_t shield; // 0x1808            
            std::int32_t total_shield; // 0x180c            
            float restore_time; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_LegionCommander_OverwhelmingOdds_Shield) == 0x1818);
    };
};
