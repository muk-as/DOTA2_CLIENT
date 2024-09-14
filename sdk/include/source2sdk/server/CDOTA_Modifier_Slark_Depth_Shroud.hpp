#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Slark_Depth_Shroud : public server::CDOTA_Modifier_Invisible
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x16f8        
        int32_t bonus_movement_speed; // 0x16fc        
        float bonus_regen; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Slark_Depth_Shroud because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Slark_Depth_Shroud) == 0x1708);
};
