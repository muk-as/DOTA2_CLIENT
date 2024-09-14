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
    // Size: 0x1710
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_StonehallGeneral_OverwhelmingOdds_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x16e8        
        int32_t max_steps; // 0x16ec        
        float damage_interval; // 0x16f0        
        int32_t m_nNumSteps; // 0x16f4        
        int32_t m_nRadiusStep; // 0x16f8        
        client::ParticleIndex_t m_nFXIndex; // 0x16fc        
        Vector m_vDir; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_StonehallGeneral_OverwhelmingOdds_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_StonehallGeneral_OverwhelmingOdds_Thinker) == 0x1710);
};
