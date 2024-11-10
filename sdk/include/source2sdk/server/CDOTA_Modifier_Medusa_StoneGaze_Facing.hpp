#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Medusa_StoneGaze_Facing : public client::CDOTA_Buff
    {
    public:
        float face_duration; // 0x1708        
        float stone_duration; // 0x170c        
        float duration; // 0x1710        
        float vision_cone; // 0x1714        
        float m_flAccumulatedTime; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        server::CountdownTimer ctFacing; // 0x1720        
        bool m_bAlreadyStoned; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1739[0x3]; // 0x1739
        client::ParticleIndex_t m_nFXIndex; // 0x173c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_StoneGaze_Facing because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Medusa_StoneGaze_Facing) == 0x1740);
};
