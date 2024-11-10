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
    // Size: 0x1880
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DarkSeer_Normal_Punch : public client::CDOTA_Buff
    {
    public:
        Vector m_PositionIndex[30]; // 0x1708        
        client::ParticleIndex_t m_nNormalPunchBuffIndex; // 0x1870        
        float m_flDistanceTraveled; // 0x1874        
        bool m_bIsValidTarget; // 0x1878        
        [[maybe_unused]] std::uint8_t pad_0x1879[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkSeer_Normal_Punch because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkSeer_Normal_Punch) == 0x1880);
};
