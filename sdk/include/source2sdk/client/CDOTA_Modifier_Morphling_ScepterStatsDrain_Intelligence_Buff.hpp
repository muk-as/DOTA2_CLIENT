#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Morphling_ScepterStatsDrain_Intelligence_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t scepter_stat_steal; // 0x1888            
            std::int32_t scepter_spell_amplify; // 0x188c            
            std::int32_t nStrengthSteal; // 0x1890            
            std::int32_t nIntSteal; // 0x1894            
            std::int32_t nAgilitySteal; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Morphling_ScepterStatsDrain_Intelligence_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Morphling_ScepterStatsDrain_Intelligence_Buff) == 0x18a0);
    };
};
