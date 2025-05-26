#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Shredder_Reactive_Armor : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t stack_limit; // 0x1878            
            float stack_duration; // 0x187c            
            std::int32_t stacks_per_hero_attack; // 0x1880            
            source2sdk::entity2::GameTime_t m_flStackDieTime; // 0x1884            
            source2sdk::client::ParticleIndex_t m_pFXIndex[4]; // 0x1888            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_Reactive_Armor because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Shredder_Reactive_Armor) == 0x1898);
    };
};
