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
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Pudge_Meat_Hook : public client::CDOTA_Buff
    {
    public:
        float distance_to_damage; // 0x1708        
        float min_distance_damage; // 0x170c        
        Vector2D m_vLastPosition; // 0x1710        
        float m_flAccumulatedDistance; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Meat_Hook because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pudge_Meat_Hook) == 0x1720);
};
