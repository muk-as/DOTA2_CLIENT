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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_AghsFort_Creature_Phoenix_LaunchFireSpirit : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t spirit_speed; // 0x688            
            float duration; // 0x68c            
            std::int32_t radius; // 0x690            
            std::int32_t hp_cost_perc; // 0x694            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x698            
            uint8_t _pad069c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_Creature_Phoenix_LaunchFireSpirit because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Ability_AghsFort_Creature_Phoenix_LaunchFireSpirit) == 0x6a0);
    };
};
