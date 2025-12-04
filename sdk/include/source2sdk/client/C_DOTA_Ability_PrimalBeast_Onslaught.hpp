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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_PrimalBeast_Onslaught : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float max_charge_time; // 0x_            
            float knockback_distance; // 0x_            
            std::int32_t knockback_damage; // 0x_            
            std::int32_t collision_radius; // 0x_            
            std::int32_t max_distance; // 0x_            
            Vector m_vStartPos; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            std::int32_t m_nProjectileID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_PrimalBeast_Onslaught because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_PrimalBeast_Onslaught) == 0x_);
    };
};
