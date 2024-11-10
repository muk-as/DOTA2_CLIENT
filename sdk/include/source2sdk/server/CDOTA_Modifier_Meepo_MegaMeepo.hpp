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
    // Size: 0x1730
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Meepo_MegaMeepo : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x1708        
        float m_flOffset; // 0x170c        
        QAngle m_vStartAngles; // 0x1710        
        Vector m_vStartLocation; // 0x171c        
        float animation_rate; // 0x1728        
        bool m_bInterrupted; // 0x172c        
        bool m_bHasBeenDestroyed; // 0x172d        
        bool m_bIsHighestMeepo; // 0x172e        
        [[maybe_unused]] std::uint8_t pad_0x172f[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Meepo_MegaMeepo because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Meepo_MegaMeepo) == 0x1730);
};
