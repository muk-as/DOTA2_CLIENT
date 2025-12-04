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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Centaur_Double_Edge_Damage_Tracking : public source2sdk::client::CDOTA_Buff
        {
        public:
            float stack_duration; // 0x_            
            std::int32_t pct_of_incoming_damage_as_bonus; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_fTotalDamage; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Centaur_Double_Edge_Damage_Tracking because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Centaur_Double_Edge_Damage_Tracking) == 0x_);
    };
};
