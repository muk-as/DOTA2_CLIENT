#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Beastmaster_InnerBeast : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_attack_speed; // 0x1878            
            std::int32_t attack_speed_per_unit; // 0x187c            
            std::int32_t magic_resist; // 0x1880            
            std::int32_t nTotalUnits; // 0x1884            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Beastmaster_InnerBeast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Beastmaster_InnerBeast) == 0x1888);
    };
};
