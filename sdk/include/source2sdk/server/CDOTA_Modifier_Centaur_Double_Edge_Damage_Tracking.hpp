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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Centaur_Double_Edge_Damage_Tracking : public source2sdk::client::CDOTA_Buff
        {
        public:
            float stack_duration; // 0x1878            
            std::int32_t pct_of_incoming_damage_as_bonus; // 0x187c            
            uint8_t _pad1880[0x18]; // 0x1880
            float m_fTotalDamage; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Centaur_Double_Edge_Damage_Tracking because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Centaur_Double_Edge_Damage_Tracking) == 0x18a0);
    };
};
