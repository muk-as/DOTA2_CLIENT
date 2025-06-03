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
        class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage_reduction_pct; // 0x1878            
            float bonus_damage_duration; // 0x187c            
            float bonus_damage_from_creep; // 0x1880            
            float bonus_damage_from_hero; // 0x1884            
            bool m_bWasHidden; // 0x1888            
            uint8_t _pad1889[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect) == 0x1890);
    };
};
