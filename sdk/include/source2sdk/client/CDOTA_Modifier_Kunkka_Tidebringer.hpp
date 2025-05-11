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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kunkka_Tidebringer : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bTidebringerAttack; // 0x17f8            
            uint8_t _pad17f9[0x3]; // 0x17f9
            float cleave_starting_width; // 0x17fc            
            float cleave_ending_width; // 0x1800            
            float cleave_distance; // 0x1804            
            float damage_bonus; // 0x1808            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x180c            
            float cleave_damage; // 0x1810            
            float cooldown_reduction_per_hero_hit; // 0x1814            
            uint8_t _pad1818[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kunkka_Tidebringer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kunkka_Tidebringer) == 0x1820);
    };
};
