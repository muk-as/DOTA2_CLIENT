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
    class CDOTA_Modifier_Meepo_MegaMeepo : public client::CDOTA_Buff
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x16e8        
        float m_flOffset; // 0x16ec        
        QAngle m_vStartAngles; // 0x16f0        
        Vector m_vStartLocation; // 0x16fc        
        float animation_rate; // 0x1708        
        bool m_bInterrupted; // 0x170c        
        bool m_bHasBeenDestroyed; // 0x170d        
        bool m_bIsHighestMeepo; // 0x170e        
        [[maybe_unused]] std::uint8_t pad_0x170f[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Meepo_MegaMeepo because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Meepo_MegaMeepo) == 0x1710);
};
