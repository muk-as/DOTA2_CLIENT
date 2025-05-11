#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float creation_interval; // 0x17f8            
            float vines_duration; // 0x17fc            
            std::int32_t vine_spawn_interval; // 0x1800            
            Vector m_vInitialLoc; // 0x1804            
            Vector m_vFinalLoc; // 0x1810            
            std::int32_t m_iVineCount; // 0x181c            
            std::int32_t m_iVinesIndex; // 0x1820            
            bool m_bFoundTree; // 0x1824            
            uint8_t _pad1825[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Treant_NaturesGrasp_Creation_Thinker) == 0x1828);
    };
};
