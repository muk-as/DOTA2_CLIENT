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
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Hoodwink_Sharpshooter_Windup : public client::CDOTA_Buff
    {
    public:
        bool m_bReachedMax; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16e9[0x3]; // 0x16e9
        float m_flLastOverheadTime; // 0x16ec        
        float m_flFacingTarget; // 0x16f0        
        Vector m_vAimTarget; // 0x16f4        
        client::ParticleIndex_t m_nCrosshairFX; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4]; // 0x1704
        // m_vecVisionThinkers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecVisionThinkers;
        char m_vecVisionThinkers[0x18]; // 0x1708        
        int32_t arrow_vision; // 0x1720        
        float max_charge_time; // 0x1724        
        float turn_rate; // 0x1728        
        float base_power; // 0x172c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Sharpshooter_Windup because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Hoodwink_Sharpshooter_Windup) == 0x1730);
};
