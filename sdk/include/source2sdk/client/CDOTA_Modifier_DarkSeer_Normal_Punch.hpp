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
    // Size: 0x1860
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DarkSeer_Normal_Punch : public client::CDOTA_Buff
    {
    public:
        Vector m_PositionIndex[30]; // 0x16e8        
        client::ParticleIndex_t m_nNormalPunchBuffIndex; // 0x1850        
        float m_flDistanceTraveled; // 0x1854        
        bool m_bIsValidTarget; // 0x1858        
        [[maybe_unused]] std::uint8_t pad_0x1859[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkSeer_Normal_Punch because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkSeer_Normal_Punch) == 0x1860);
};
