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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lich_Chain_Frost_Frostbound : public source2sdk::client::CDOTA_Buff
        {
        public:
            float jump_range; // 0x1878            
            std::int32_t jumps_remaining; // 0x187c            
            std::int32_t damage_to_heroes; // 0x1880            
            std::int32_t heroes_killed; // 0x1884            
            bool m_bFoundTarget; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x188c            
            uint8_t _pad1890[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lich_Chain_Frost_Frostbound because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Lich_Chain_Frost_Frostbound) == 0x18a8);
    };
};
