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
        // Size: 0x698
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_VoidSpirit_ResonantPulse : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool m_bGrantedScepterCharges; // 0x688            
            uint8_t _pad0689[0x3]; // 0x689
            float buff_duration; // 0x68c            
            float base_absorb_amount; // 0x690            
            float absorb_per_hero_hit; // 0x694            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_VoidSpirit_ResonantPulse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_VoidSpirit_ResonantPulse) == 0x698);
    };
};
