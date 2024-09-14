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
    // Size: 0x1720
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Rubick_FadeBolt : public client::CDOTA_Buff
    {
    public:
        float radius; // 0x16e8        
        int32_t damage; // 0x16ec        
        int32_t jump_damage_reduction_pct; // 0x16f0        
        float jump_delay; // 0x16f4        
        int32_t m_iCurJumpCount; // 0x16f8        
        Vector m_vCurTargetLoc; // 0x16fc        
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0x1708        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Rubick_FadeBolt because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Rubick_FadeBolt) == 0x1720);
};
