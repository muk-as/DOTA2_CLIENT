#pragma once
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
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
    class CDOTA_Modifier_Weaver_Shukuchi : public server::CDOTA_Modifier_Invisible
    {
    public:
        float radius; // 0x16f8        
        int32_t damage; // 0x16fc        
        int32_t speed; // 0x1700        
        int32_t min_movespeed_override; // 0x1704        
        float geminate_attack_mark_duration; // 0x1708        
        float slow_duration; // 0x170c        
        // m_hEntitiesAffected has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hEntitiesAffected;
        char m_hEntitiesAffected[0x18]; // 0x1710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Weaver_Shukuchi because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Weaver_Shukuchi) == 0x1728);
};
