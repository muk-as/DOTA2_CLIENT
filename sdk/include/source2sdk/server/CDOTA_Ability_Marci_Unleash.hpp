#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Marci_Unleash : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float duration; // 0x5b8            
            float pulse_radius; // 0x5bc            
            float pulse_debuff_duration; // 0x5c0            
            float pulse_damage; // 0x5c4            
            float pulse_silence_duration; // 0x5c8            
            uint8_t _pad05cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Marci_Unleash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Marci_Unleash) == 0x5d0);
    };
};
