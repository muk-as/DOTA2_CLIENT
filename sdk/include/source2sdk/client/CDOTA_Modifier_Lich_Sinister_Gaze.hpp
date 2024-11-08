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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Lich_Sinister_Gaze : public client::CDOTA_Buff
    {
    public:
        int32_t movement_speed; // 0x1708        
        int32_t mana_drain; // 0x170c        
        float m_flIntervalRate; // 0x1710        
        client::ParticleIndex_t m_nFXIndex; // 0x1714        
        float creep_damage; // 0x1718        
        bool m_bBlasted; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Lich_Sinister_Gaze because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Lich_Sinister_Gaze) == 0x1720);
};
