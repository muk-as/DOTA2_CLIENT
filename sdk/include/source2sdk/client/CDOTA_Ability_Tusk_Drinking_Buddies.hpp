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
        // Size: 0x690
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Tusk_Drinking_Buddies : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float buff_duration; // 0x680            
            float pull_duration; // 0x684            
            float min_distance; // 0x688            
            bool m_bIsAltCastState; // 0x68c            
            uint8_t _pad068d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Tusk_Drinking_Buddies because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Tusk_Drinking_Buddies) == 0x690);
    };
};
