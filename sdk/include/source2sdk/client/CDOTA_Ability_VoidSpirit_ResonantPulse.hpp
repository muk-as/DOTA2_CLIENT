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
        // Size: 0x5c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_VoidSpirit_ResonantPulse : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool m_bGrantedScepterCharges; // 0x5b0            
            uint8_t _pad05b1[0x3]; // 0x5b1
            float buff_duration; // 0x5b4            
            std::int32_t base_absorb_amount; // 0x5b8            
            std::int32_t absorb_per_hero_hit; // 0x5bc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_ResonantPulse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_VoidSpirit_ResonantPulse) == 0x5c0);
    };
};
