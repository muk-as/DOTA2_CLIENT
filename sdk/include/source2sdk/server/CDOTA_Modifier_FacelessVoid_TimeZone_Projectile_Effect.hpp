#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_FacelessVoid_TimeZone_Projectile_Effect : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_projectile_speed; // 0x_            
            float flRadius; // 0x_            
            Vector2D vCenter; // 0x_            
            Vector2D vLeft; // 0x_            
            Vector2D vForward; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_FacelessVoid_TimeZone_Projectile_Effect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_FacelessVoid_TimeZone_Projectile_Effect) == 0x_);
    };
};
