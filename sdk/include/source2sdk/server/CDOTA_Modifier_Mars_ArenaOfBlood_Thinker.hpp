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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mars_ArenaOfBlood_Thinker : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        float formation_time; // 0x16ec        
        float m_flInitialZ; // 0x16f0        
        float m_flFinalZ; // 0x16f4        
        [[maybe_unused]] std::uint8_t pad_0x16f8[0x10]; // 0x16f8
        bool m_bCaughtOne; // 0x1708        
        bool m_bKilledOne; // 0x1709        
        [[maybe_unused]] std::uint8_t pad_0x170a[0x6]; // 0x170a
        // m_vecVisionBlockers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecVisionBlockers;
        char m_vecVisionBlockers[0x18]; // 0x1710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_ArenaOfBlood_Thinker) == 0x1728);
};
