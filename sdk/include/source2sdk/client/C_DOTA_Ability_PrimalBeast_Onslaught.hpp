#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x5e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_PrimalBeast_Onslaught : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float max_charge_time; // 0x5b0            
            float knockback_distance; // 0x5b4            
            std::int32_t knockback_damage; // 0x5b8            
            std::int32_t collision_radius; // 0x5bc            
            std::int32_t max_distance; // 0x5c0            
            Vector m_vStartPos; // 0x5c4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5d0            
            std::int32_t m_nProjectileID; // 0x5d4            
            uint8_t _pad05d8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_PrimalBeast_Onslaught because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_PrimalBeast_Onslaught) == 0x5e0);
    };
};
