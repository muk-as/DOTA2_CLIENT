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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_AghsFort_StonehallGeneral_OverwhelmingOdds_Thinker : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x1708        
        int32_t max_steps; // 0x170c        
        float damage_interval; // 0x1710        
        int32_t m_nNumSteps; // 0x1714        
        int32_t m_nRadiusStep; // 0x1718        
        client::ParticleIndex_t m_nFXIndex; // 0x171c        
        Vector m_vDir; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_AghsFort_StonehallGeneral_OverwhelmingOdds_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_AghsFort_StonehallGeneral_OverwhelmingOdds_Thinker) == 0x1730);
};
