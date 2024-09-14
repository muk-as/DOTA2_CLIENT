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
    class CDOTA_Modifier_PhantomAssassin_Fan_Of_Knives_Thinker : public client::CDOTA_Buff
    {
    public:
        float m_fCurRadius; // 0x16e8        
        entity2::GameTime_t m_fLastThink; // 0x16ec        
        // m_entitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_entitiesHit;
        char m_entitiesHit[0x18]; // 0x16f0        
        server::CountdownTimer m_ViewerTimer; // 0x1708        
        int32_t projectile_speed; // 0x1720        
        int32_t radius; // 0x1724        
        float duration; // 0x1728        
        float pct_health_damage_initial; // 0x172c        
        float max_damage_initial; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_Fan_Of_Knives_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PhantomAssassin_Fan_Of_Knives_Thinker) == 0x1738);
};
