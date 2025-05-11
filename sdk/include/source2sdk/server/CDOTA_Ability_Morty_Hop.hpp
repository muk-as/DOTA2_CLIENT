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
        class CDOTA_Ability_Morty_Hop : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float max_distance; // 0x5b8            
            Vector m_vTarget; // 0x5bc            
            std::int32_t m_iTrackerProjectile; // 0x5c8            
            uint8_t _pad05cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Morty_Hop because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Morty_Hop) == 0x5d0);
    };
};
