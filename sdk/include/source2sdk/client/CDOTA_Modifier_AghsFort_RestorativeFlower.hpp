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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_RestorativeFlower : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x16e8        
        int32_t heal; // 0x16ec        
        int32_t vision_radius; // 0x16f0        
        float vision_duration; // 0x16f4        
        int32_t model_scale; // 0x16f8        
        bool bExploding; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3]; // 0x16fd
        float stun_duration; // 0x1700        
        client::ParticleIndex_t m_nFXAmbient; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_RestorativeFlower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_RestorativeFlower) == 0x1708);
};
