#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Size: 0x1738
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Item_Shivas_Guard_Thinker : public client::CDOTA_Buff
    {
    public:
        float m_fCurRadius; // 0x16e8        
        entity2::GameTime_t m_fLastThink; // 0x16ec        
        // m_entitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_entitiesHit;
        char m_entitiesHit[0x18]; // 0x16f0        
        server::CountdownTimer m_ViewerTimer; // 0x1708        
        int32_t blast_speed; // 0x1720        
        float blast_radius; // 0x1724        
        int32_t blast_damage; // 0x1728        
        int32_t illusion_multiplier_pct; // 0x172c        
        float blast_debuff_duration; // 0x1730        
        float resist_debuff_duration; // 0x1734        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Item_Shivas_Guard_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Item_Shivas_Guard_Thinker) == 0x1738);
};
