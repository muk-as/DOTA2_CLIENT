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
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Aghsfort_Ability_Hoodwink_HuntersBoomerang : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t min_distance; // 0x5c0            
            uint8_t _pad05c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Aghsfort_Ability_Hoodwink_HuntersBoomerang because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Aghsfort_Ability_Hoodwink_HuntersBoomerang) == 0x5c8);
    };
};
