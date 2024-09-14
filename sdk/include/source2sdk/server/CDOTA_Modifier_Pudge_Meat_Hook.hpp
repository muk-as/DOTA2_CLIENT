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
    class CDOTA_Modifier_Pudge_Meat_Hook : public client::CDOTA_Buff
    {
    public:
        float distance_to_damage; // 0x16e8        
        float min_distance_damage; // 0x16ec        
        Vector2D m_vLastPosition; // 0x16f0        
        float m_flAccumulatedDistance; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Pudge_Meat_Hook because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Pudge_Meat_Hook) == 0x1700);
};
