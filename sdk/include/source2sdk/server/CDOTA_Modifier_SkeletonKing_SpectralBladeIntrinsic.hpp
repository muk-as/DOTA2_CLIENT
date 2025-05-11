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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_SkeletonKing_SpectralBladeIntrinsic : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t vampiric_aura; // 0x17f8            
            std::int32_t creep_lifesteal_reduction_pct; // 0x17fc            
            float cursed_damage; // 0x1800            
            float cursed_damage_pct; // 0x1804            
            float curse_cooldown; // 0x1808            
            float curse_cooldown_creep; // 0x180c            
            float curse_delay; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_SkeletonKing_SpectralBladeIntrinsic because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_SkeletonKing_SpectralBladeIntrinsic) == 0x1818);
    };
};
