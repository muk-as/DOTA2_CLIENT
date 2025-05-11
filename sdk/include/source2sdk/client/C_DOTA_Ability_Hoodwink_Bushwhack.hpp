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
        // Size: 0x7c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Hoodwink_Bushwhack : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float trap_radius; // 0x5b0            
            std::int32_t m_nProjectileHandle; // 0x5b4            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x5b8            
            uint8_t _pad05bc[0x20c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Hoodwink_Bushwhack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Hoodwink_Bushwhack) == 0x7c8);
    };
};
