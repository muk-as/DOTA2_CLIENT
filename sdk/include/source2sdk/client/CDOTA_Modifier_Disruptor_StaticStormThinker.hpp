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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Disruptor_StaticStormThinker : public client::CDOTA_Buff
    {
    public:
        int32_t m_nCurrentPulse; // 0x16e8        
        float radius; // 0x16ec        
        int32_t damage_max; // 0x16f0        
        int32_t pulses; // 0x16f4        
        float duration; // 0x16f8        
        client::ParticleIndex_t m_nFXIndex; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Disruptor_StaticStormThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Disruptor_StaticStormThinker) == 0x1700);
};