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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_ExplosiveBarrel : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nPreviewFX; // 0x16e8        
        int32_t radius; // 0x16ec        
        int32_t damage; // 0x16f0        
        int32_t vision_radius; // 0x16f4        
        float vision_duration; // 0x16f8        
        int32_t model_scale; // 0x16fc        
        bool bExploding; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1701[0x3]; // 0x1701
        float stun_duration; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_ExplosiveBarrel because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_ExplosiveBarrel) == 0x1708);
};
