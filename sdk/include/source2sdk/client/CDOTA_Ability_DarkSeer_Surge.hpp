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
        class CDOTA_Ability_DarkSeer_Surge : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool m_bIsAltCastState; // 0x680            
            uint8_t _pad0681[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_DarkSeer_Surge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_DarkSeer_Surge) == 0x688);
    };
};
