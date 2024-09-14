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
    class CDOTA_Modifier_Lich_Sinister_Gaze : public client::CDOTA_Buff
    {
    public:
        int32_t movement_speed; // 0x16e8        
        int32_t mana_drain; // 0x16ec        
        float m_flIntervalRate; // 0x16f0        
        client::ParticleIndex_t m_nFXIndex; // 0x16f4        
        float creep_damage; // 0x16f8        
        bool m_bBlasted; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x16fd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lich_Sinister_Gaze because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lich_Sinister_Gaze) == 0x1700);
};
