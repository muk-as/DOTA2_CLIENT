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
        class CDOTA_Modifier_DrowRanger_Marksmanship_Aura_Bonus : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t trueshot_agi_bonus_base; // 0x1888            
            std::int32_t trueshot_agi_bonus_per_level; // 0x188c            
            float trueshot_agi_bonus_allies_pct; // 0x1890            
            uint8_t _pad1894[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DrowRanger_Marksmanship_Aura_Bonus because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DrowRanger_Marksmanship_Aura_Bonus) == 0x1898);
    };
};
