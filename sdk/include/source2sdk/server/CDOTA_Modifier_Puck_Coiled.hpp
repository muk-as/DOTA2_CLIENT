#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    class CDOTA_Modifier_Puck_Coiled : public client::CDOTA_Buff
    {
    public:
        Vector m_vCastLocation; // 0x16e8        
        int32_t coil_rapid_fire_z_offset; // 0x16f4        
        float coil_rapid_fire_rate; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Puck_Coiled because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Puck_Coiled) == 0x1700);
};
