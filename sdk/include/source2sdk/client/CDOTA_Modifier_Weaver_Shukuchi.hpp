#pragma once
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Weaver_Shukuchi : public client::CDOTA_Modifier_Invisible
    {
    public:
        float radius; // 0x1718        
        int32_t damage; // 0x171c        
        int32_t speed; // 0x1720        
        int32_t min_movespeed_override; // 0x1724        
        float geminate_attack_mark_duration; // 0x1728        
        float slow_duration; // 0x172c        
        // m_hEntitiesAffected has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hEntitiesAffected;
        char m_hEntitiesAffected[0x18]; // 0x1730        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Weaver_Shukuchi because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Weaver_Shukuchi) == 0x1748);
};
