#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing : public client::CDOTA_Buff
    {
    public:
        float face_duration; // 0x16e8        
        float duration; // 0x16ec        
        float vision_cone; // 0x16f0        
        float m_flAccumulatedTime; // 0x16f4        
        float mesmerize_radius; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4]; // 0x16fc
        client::CountdownTimer ctFacing; // 0x1700        
        client::ParticleIndex_t m_nFXIndex; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing) == 0x1720);
};
