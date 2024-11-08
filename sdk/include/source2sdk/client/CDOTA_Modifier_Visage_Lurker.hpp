#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Visage_Lurker : public client::CDOTA_Buff
    {
    public:
        int32_t max_stacks; // 0x1708        
        float stack_gain_time; // 0x170c        
        float cooldown_speed_per_stack; // 0x1710        
        float linger_duration; // 0x1714        
        client::ParticleIndex_t m_nFXIndex; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Visage_Lurker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Visage_Lurker) == 0x1720);
};
