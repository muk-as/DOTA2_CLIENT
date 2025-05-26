#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DrowRanger_Marksmanship : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t chance; // 0x1878            
            source2sdk::client::ParticleIndex_t m_nFxIndex; // 0x187c            
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1880            
            // m_GlacialInFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_GlacialInFlightAttackRecords;
            char m_GlacialInFlightAttackRecords[0x18]; // 0x1898            
            std::int32_t bonus_factor; // 0x18b0            
            std::int32_t disable_range; // 0x18b4            
            std::int32_t agility_range; // 0x18b8            
            std::int32_t bonus_damage; // 0x18bc            
            std::int32_t split_count; // 0x18c0            
            std::int32_t split_range; // 0x18c4            
            bool m_bGlacialAttack; // 0x18c8            
            uint8_t _pad18c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DrowRanger_Marksmanship because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DrowRanger_Marksmanship) == 0x18d0);
    };
};
