#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTA_Modifier_Naga_Siren_Reel_In : public client::CDOTA_Buff
    {
    public:
        float pull_strength; // 0x1708        
        int32_t min_pull_distance; // 0x170c        
        entity2::GameTime_t m_flLastThinkTime; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Naga_Siren_Reel_In because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Naga_Siren_Reel_In) == 0x1718);
};
