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
        class CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vDir; // 0x1878            
            bool m_bBoulderCreated; // 0x1884            
            uint8_t _pad1885[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster) == 0x1888);
    };
};
