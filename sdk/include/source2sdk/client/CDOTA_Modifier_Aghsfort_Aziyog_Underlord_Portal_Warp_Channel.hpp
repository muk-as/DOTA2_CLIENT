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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Portal_Warp_Channel : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nfxTargetTp; // 0x1708        
        client::ParticleIndex_t m_nfxTargetTp2; // 0x170c        
        client::ParticleIndex_t m_nfxAmbientFx; // 0x1710        
        client::ParticleIndex_t m_nfxPortal1; // 0x1714        
        client::ParticleIndex_t m_nfxPortal2; // 0x1718        
        float animation_rate; // 0x171c        
        int32_t stop_distance; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Portal_Warp_Channel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Portal_Warp_Channel) == 0x1728);
};
