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
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Hurricane_Whirlpool : public client::CDOTA_Buff
    {
    public:
        float pull_switch_interval; // 0x1708        
        int32_t pull_speed; // 0x170c        
        bool m_bForward; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1711[0x3]; // 0x1711
        client::ParticleIndex_t m_nfxIndex; // 0x1714        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Hurricane_Whirlpool because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Hurricane_Whirlpool) == 0x1718);
};
