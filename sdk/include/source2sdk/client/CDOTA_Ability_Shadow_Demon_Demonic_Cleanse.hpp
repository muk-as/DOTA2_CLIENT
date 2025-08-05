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
        class CDOTA_Ability_Shadow_Demon_Demonic_Cleanse : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            bool m_bGrantedScepterCharges; // 0x688            
            uint8_t _pad0689[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Shadow_Demon_Demonic_Cleanse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_Shadow_Demon_Demonic_Cleanse) == 0x690);
    };
};
