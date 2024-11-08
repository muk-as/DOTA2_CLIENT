#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1758
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_PhantomAssassin_Fan_Of_Knives_Thinker : public client::CDOTA_Buff
    {
    public:
        float m_fCurRadius; // 0x1708        
        entity2::GameTime_t m_fLastThink; // 0x170c        
        // m_entitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_entitiesHit;
        char m_entitiesHit[0x18]; // 0x1710        
        client::CountdownTimer m_ViewerTimer; // 0x1728        
        int32_t projectile_speed; // 0x1740        
        int32_t radius; // 0x1744        
        float duration; // 0x1748        
        float pct_health_damage_initial; // 0x174c        
        float max_damage_initial; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_PhantomAssassin_Fan_Of_Knives_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_PhantomAssassin_Fan_Of_Knives_Thinker) == 0x1758);
};
