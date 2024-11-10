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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_PrimalBeast_Onslaught_Windup : public client::CDOTA_Buff
    {
    public:
        bool m_bReachedMax; // 0x1708        
        bool m_bShouldCharge; // 0x1709        
        [[maybe_unused]] std::uint8_t pad_0x170a[0x2]; // 0x170a
        float m_flLastOverheadTime; // 0x170c        
        float m_flFacingTarget; // 0x1710        
        Vector m_vAimTarget; // 0x1714        
        client::ParticleIndex_t m_nCrosshairFX; // 0x1720        
        float m_flChargeDuration; // 0x1724        
        int32_t max_distance; // 0x1728        
        float max_charge_time; // 0x172c        
        float turn_rate; // 0x1730        
        float base_power; // 0x1734        
        int32_t charge_speed; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x173c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PrimalBeast_Onslaught_Windup because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PrimalBeast_Onslaught_Windup) == 0x1740);
};
