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
    // Size: 0x1740
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Zuus_ThundergodsWrathThinker : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x1708        
        float damage_pct; // 0x170c        
        float sight_duration; // 0x1710        
        float growing_delay; // 0x1714        
        float grow_kill_amp; // 0x1718        
        bool m_bZeusHasArcana; // 0x171c        
        [[maybe_unused]] std::uint8_t pad_0x171d[0x3]; // 0x171d
        // m_hTargetEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTargetEntities;
        char m_hTargetEntities[0x18]; // 0x1720        
        int32_t m_nFarKills; // 0x1738        
        int32_t m_nKills; // 0x173c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Zuus_ThundergodsWrathThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Zuus_ThundergodsWrathThinker) == 0x1740);
};
