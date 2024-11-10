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
    // Size: 0x1760
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kez_RavensVeil_Thinker : public client::CDOTA_Buff
    {
    public:
        float m_fCurRadius; // 0x1708        
        entity2::GameTime_t m_fLastThink; // 0x170c        
        // m_entitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_entitiesHit;
        char m_entitiesHit[0x18]; // 0x1710        
        server::CountdownTimer m_ViewerTimer; // 0x1728        
        int32_t blast_radius; // 0x1740        
        int32_t blast_speed; // 0x1744        
        int32_t apply_parry_bonus; // 0x1748        
        float blind_duration; // 0x174c        
        float vuln_duration; // 0x1750        
        Vector m_vStartLoc; // 0x1754        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kez_RavensVeil_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kez_RavensVeil_Thinker) == 0x1760);
};
