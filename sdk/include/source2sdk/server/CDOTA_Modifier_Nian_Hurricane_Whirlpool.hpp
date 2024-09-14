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
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Hurricane_Whirlpool : public client::CDOTA_Buff
    {
    public:
        float pull_switch_interval; // 0x16e8        
        int32_t pull_speed; // 0x16ec        
        bool m_bForward; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x3]; // 0x16f1
        client::ParticleIndex_t m_nfxIndex; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Hurricane_Whirlpool because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Hurricane_Whirlpool) == 0x16f8);
};
