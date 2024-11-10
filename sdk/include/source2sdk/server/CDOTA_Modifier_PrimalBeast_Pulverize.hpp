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
    class CDOTA_Modifier_PrimalBeast_Pulverize : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x1708        
        float m_flOffset; // 0x170c        
        QAngle m_vStartAngles; // 0x1710        
        Vector m_vStartLocation; // 0x171c        
        float animation_rate; // 0x1728        
        bool m_bInterrupted; // 0x172c        
        bool m_bHasBeenDestroyed; // 0x172d        
        [[maybe_unused]] std::uint8_t pad_0x172e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Pulverize because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PrimalBeast_Pulverize) == 0x1730);
};
