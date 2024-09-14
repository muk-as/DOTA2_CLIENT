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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Medusa_StoneGaze_Facing : public client::CDOTA_Buff
    {
    public:
        float face_duration; // 0x16e8        
        float stone_duration; // 0x16ec        
        float duration; // 0x16f0        
        float vision_cone; // 0x16f4        
        float m_flAccumulatedTime; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4]; // 0x16fc
        server::CountdownTimer ctFacing; // 0x1700        
        bool m_bAlreadyStoned; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        client::ParticleIndex_t m_nFXIndex; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Medusa_StoneGaze_Facing because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Medusa_StoneGaze_Facing) == 0x1720);
};
