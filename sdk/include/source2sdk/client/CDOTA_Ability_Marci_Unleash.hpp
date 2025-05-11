#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Marci_Unleash : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float duration; // 0x5b0            
            float pulse_radius; // 0x5b4            
            float pulse_debuff_duration; // 0x5b8            
            float pulse_damage; // 0x5bc            
            float pulse_silence_duration; // 0x5c0            
            uint8_t _pad05c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Marci_Unleash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Marci_Unleash) == 0x5c8);
    };
};
