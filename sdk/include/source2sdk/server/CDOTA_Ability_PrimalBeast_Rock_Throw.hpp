#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_PrimalBeast_Rock_Throw : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t base_damage; // 0x5c0            
            float impact_radius; // 0x5c4            
            float fragment_impact_radius; // 0x5c8            
            std::int32_t fragment_impact_distance; // 0x5cc            
            std::int32_t min_range; // 0x5d0            
            float stun_duration; // 0x5d4            
            source2sdk::client::ParticleIndex_t m_nFXPreview; // 0x5d8            
            uint8_t _pad05dc[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_PrimalBeast_Rock_Throw because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_PrimalBeast_Rock_Throw) == 0x5f0);
    };
};
