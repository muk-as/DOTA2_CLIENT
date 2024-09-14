#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_Modifier_Naga_Siren_Reel_In : public client::CDOTA_Buff
    {
    public:
        float pull_strength; // 0x16e8        
        int32_t min_pull_distance; // 0x16ec        
        entity2::GameTime_t m_flLastThinkTime; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Naga_Siren_Reel_In because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Naga_Siren_Reel_In) == 0x16f8);
};
