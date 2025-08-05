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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_tierReroll"
        #pragma pack(push, 1)
        class CDOTA_Ability_LoneDruid_Innate_GiftBearer : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_tierReroll[5]; // 0x688            
            uint8_t _pad069c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_LoneDruid_Innate_GiftBearer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_LoneDruid_Innate_GiftBearer) == 0x6a0);
    };
};
