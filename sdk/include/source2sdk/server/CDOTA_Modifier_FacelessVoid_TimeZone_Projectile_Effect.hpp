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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_FacelessVoid_TimeZone_Projectile_Effect : public client::CDOTA_Buff
    {
    public:
        int32_t bonus_projectile_speed; // 0x1708        
        float flRadius; // 0x170c        
        Vector2D vCenter; // 0x1710        
        Vector2D vLeft; // 0x1718        
        Vector2D vForward; // 0x1720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_FacelessVoid_TimeZone_Projectile_Effect because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_FacelessVoid_TimeZone_Projectile_Effect) == 0x1728);
};
