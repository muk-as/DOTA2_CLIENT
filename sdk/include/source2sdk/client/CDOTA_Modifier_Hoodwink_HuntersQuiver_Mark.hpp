#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_HuntersQuiver_Mark : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t stack_crit_chance_pct; // 0x1878            
            std::int32_t critical_damage_pct; // 0x187c            
            std::int32_t stack_slow_pct; // 0x1880            
            source2sdk::client::ParticleIndex_t m_nFXStackIndex; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_HuntersQuiver_Mark because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Hoodwink_HuntersQuiver_Mark) == 0x1888);
    };
};
