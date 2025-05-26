#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        class CDOTA_Modifier_Necrolyte_Sadist : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aura_radius; // 0x1878            
            bool m_bStackCountChanged; // 0x187c            
            uint8_t _pad187d[0x3]; // 0x187d
            // m_fStackExpireTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::entity2::GameTime_t> m_fStackExpireTimes;
            char m_fStackExpireTimes[0x18]; // 0x1880            
            float bonus_aoe; // 0x1898            
            float bonus_spell_amp; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Necrolyte_Sadist because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Necrolyte_Sadist) == 0x18a0);
    };
};
