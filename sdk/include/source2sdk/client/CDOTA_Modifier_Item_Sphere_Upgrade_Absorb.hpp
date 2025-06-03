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
        class CDOTA_Modifier_Item_Sphere_Upgrade_Absorb : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage_absorb; // 0x1878            
            bool m_bStartedTimer; // 0x187c            
            uint8_t _pad187d[0x3]; // 0x187d
            std::int32_t m_flDamageAbsorbed; // 0x1880            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Sphere_Upgrade_Absorb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Sphere_Upgrade_Absorb) == 0x1888);
    };
};
