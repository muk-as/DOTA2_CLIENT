#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CDOTA_Buff;
    };
};

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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Silencer_GlaivesOfWisdom : public source2sdk::client::CDOTA_Buff
        {
        public:
            float intellect_damage_pct; // 0x1878            
            uint8_t _pad187c[0x4]; // 0x187c
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1880            
            // m_InFlightSilenceAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightSilenceAttackRecords;
            char m_InFlightSilenceAttackRecords[0x18]; // 0x1898            
            source2sdk::client::CDOTA_Buff* m_pAttackCounterBuff; // 0x18b0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Silencer_GlaivesOfWisdom because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Silencer_GlaivesOfWisdom) == 0x18b8);
    };
};
