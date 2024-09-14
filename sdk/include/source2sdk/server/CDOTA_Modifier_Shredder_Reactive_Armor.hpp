#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Shredder_Reactive_Armor : public client::CDOTA_Buff
    {
    public:
        int32_t stack_limit; // 0x16e8        
        float stack_duration; // 0x16ec        
        int32_t stacks_per_hero_attack; // 0x16f0        
        entity2::GameTime_t m_flStackDieTime; // 0x16f4        
        client::ParticleIndex_t m_pFXIndex[4]; // 0x16f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Shredder_Reactive_Armor because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Shredder_Reactive_Armor) == 0x1708);
};
