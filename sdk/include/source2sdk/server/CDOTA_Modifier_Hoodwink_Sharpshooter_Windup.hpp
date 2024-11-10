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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_Sharpshooter_Windup : public client::CDOTA_Buff
    {
    public:
        bool m_bReachedMax; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x1709[0x3]; // 0x1709
        float m_flLastOverheadTime; // 0x170c        
        float m_flFacingTarget; // 0x1710        
        Vector m_vAimTarget; // 0x1714        
        client::ParticleIndex_t m_nCrosshairFX; // 0x1720        
        [[maybe_unused]] std::uint8_t pad_0x1724[0x4]; // 0x1724
        // m_vecVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecVisionThinkers;
        char m_vecVisionThinkers[0x18]; // 0x1728        
        int32_t arrow_vision; // 0x1740        
        float max_charge_time; // 0x1744        
        float turn_rate; // 0x1748        
        float base_power; // 0x174c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Sharpshooter_Windup because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Sharpshooter_Windup) == 0x1750);
};
