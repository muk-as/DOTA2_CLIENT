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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Omniknight_Marty : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t base_strength; // 0x17f8            
            std::int32_t base_hpregen; // 0x17fc            
            std::int32_t strength_bonus; // 0x1800            
            std::int32_t magic_resist; // 0x1804            
            std::int32_t nDebuffAmount; // 0x1808            
            uint8_t _pad180c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Omniknight_Marty because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Omniknight_Marty) == 0x1810);
    };
};
