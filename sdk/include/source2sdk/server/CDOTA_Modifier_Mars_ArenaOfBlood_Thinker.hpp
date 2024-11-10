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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mars_ArenaOfBlood_Thinker : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x1708        
        float formation_time; // 0x170c        
        float m_flInitialZ; // 0x1710        
        float m_flFinalZ; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1718[0x10]; // 0x1718
        bool m_bCaughtOne; // 0x1728        
        bool m_bKilledOne; // 0x1729        
        [[maybe_unused]] std::uint8_t pad_0x172a[0x6]; // 0x172a
        // m_vecVisionBlockers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecVisionBlockers;
        char m_vecVisionBlockers[0x18]; // 0x1730        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_ArenaOfBlood_Thinker) == 0x1748);
};
