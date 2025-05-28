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
        class CDOTA_Modifier_ChaosKnight_Chaos_Strike : public source2sdk::client::CDOTA_Buff
        {
        public:
            float creep_multiplier; // 0x1888            
            std::int32_t crit_min; // 0x188c            
            std::int32_t crit_max; // 0x1890            
            std::int32_t lifesteal; // 0x1894            
            float chance; // 0x1898            
            std::int32_t m_nNextCrit; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_ChaosKnight_Chaos_Strike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_ChaosKnight_Chaos_Strike) == 0x18a0);
    };
};
