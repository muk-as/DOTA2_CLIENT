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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DragonKnight_SplashAttack : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1878[0x8]; // 0x1878
            float magic_damage; // 0x1880            
            std::int32_t bonus_aoe; // 0x1884            
            float ranged_splash_damage_pct; // 0x1888            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DragonKnight_SplashAttack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DragonKnight_SplashAttack) == 0x1890);
    };
};
