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
        class CDOTA_Modifier_Orb_Of_Frost_Debuff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t slow_melee; // 0x1878            
            std::int32_t slow_ranged; // 0x187c            
            std::int32_t heal_reduction; // 0x1880            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Orb_Of_Frost_Debuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Orb_Of_Frost_Debuff) == 0x1888);
    };
};
