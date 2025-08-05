#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
        // Size: 0x6c0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Nian_Apocalypse : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            std::int32_t area_of_effect; // 0x688            
            source2sdk::client::ParticleIndex_t m_nfxIndex_roar; // 0x68c            
            float fire_interval; // 0x690            
            float delay; // 0x694            
            float target_range; // 0x698            
            uint8_t _pad069c[0x4]; // 0x69c
            source2sdk::client::CountdownTimer m_ctTimer; // 0x6a0            
            float m_flTiming; // 0x6b8            
            uint8_t _pad06bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Nian_Apocalypse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Nian_Apocalypse) == 0x6c0);
    };
};
