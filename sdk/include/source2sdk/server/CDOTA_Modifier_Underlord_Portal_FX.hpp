#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Underlord_Portal_FX : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nPortalAmbientFX; // 0x16e8        
        float m_fPortalRadius; // 0x16ec        
        client::ParticleIndex_t m_nChannelFX; // 0x16f0        
        int32_t m_nChannelCount; // 0x16f4        
        client::ParticleIndex_t m_nCountdownFX; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Underlord_Portal_FX because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Underlord_Portal_FX) == 0x1700);
};
