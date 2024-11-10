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
    class CDOTA_Modifier_Snapfire_Magma_Thinker : public client::CDOTA_Buff
    {
    public:
        float burn_interval; // 0x1708        
        int32_t impact_radius; // 0x170c        
        int32_t move_slow_pct; // 0x1710        
        float burn_linger_duration; // 0x1714        
        client::ParticleIndex_t m_nPathEffectIndex; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Snapfire_Magma_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Snapfire_Magma_Thinker) == 0x1720);
};
