#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_Scurry_Passive : public client::CDOTA_Buff
    {
    public:
        float m_flDistanceTraveled; // 0x16e8        
        float heal_movement; // 0x16ec        
        float heal_amount; // 0x16f0        
        Vector2D m_vPrevPos; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Scurry_Passive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Scurry_Passive) == 0x1700);
};
