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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SpiritBreaker_EmpoweringHaste : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_movespeed_pct_self; // 0x1888            
            std::int32_t bonus_movespeed_pct_allies; // 0x188c            
            std::int32_t bonus_movespeed_pct_extra; // 0x1890            
            std::int32_t duration; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SpiritBreaker_EmpoweringHaste because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_SpiritBreaker_EmpoweringHaste) == 0x1898);
    };
};
