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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Tidehunter_KrakenShell : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_iDamageTaken; // 0x1878            
            std::int32_t damage_reduction; // 0x187c            
            std::int32_t bonus_reduction_per_kill; // 0x1880            
            float creep_reduction_penalty_pct; // 0x1884            
            float active_pct_effectiveness; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Tidehunter_KrakenShell because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Tidehunter_KrakenShell) == 0x1890);
    };
};
