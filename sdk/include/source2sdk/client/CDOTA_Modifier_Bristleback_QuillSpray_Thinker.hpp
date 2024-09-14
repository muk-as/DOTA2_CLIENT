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
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Bristleback_QuillSpray_Thinker : public client::CDOTA_Buff
    {
    public:
        float m_fCurRadius; // 0x16e8        
        entity2::GameTime_t m_fLastThink; // 0x16ec        
        // m_entitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_entitiesHit;
        char m_entitiesHit[0x18]; // 0x16f0        
        client::CountdownTimer m_ViewerTimer; // 0x1708        
        int32_t projectile_speed; // 0x1720        
        float radius; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Bristleback_QuillSpray_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Bristleback_QuillSpray_Thinker) == 0x1728);
};
