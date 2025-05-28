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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Mirana_Leap_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t leap_speedbonus; // 0x1888            
            std::int32_t leap_speedbonus_as; // 0x188c            
            std::int32_t crit_damage_pct; // 0x1890            
            bool m_bCritUsed; // 0x1894            
            uint8_t _pad1895[0x3]; // 0x1895
            // m_vCritRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_vCritRecords;
            char m_vCritRecords[0x18]; // 0x1898            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Mirana_Leap_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Mirana_Leap_Buff) == 0x18b0);
    };
};
