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
        // Size: 0x688
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_EarthSpirit_Petrify : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t ally_cast_range; // 0x680            
            uint8_t _pad0684[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_EarthSpirit_Petrify because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_EarthSpirit_Petrify) == 0x688);
    };
};
