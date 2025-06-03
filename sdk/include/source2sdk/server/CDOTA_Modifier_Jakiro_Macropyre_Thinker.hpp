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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Jakiro_Macropyre_Thinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vPathDir; // 0x1878            
            float burn_interval; // 0x1884            
            float path_radius; // 0x1888            
            float cast_range; // 0x188c            
            float linger_duration; // 0x1890            
            bool m_bTestedGem; // 0x1894            
            uint8_t _pad1895[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Jakiro_Macropyre_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Jakiro_Macropyre_Thinker) == 0x1898);
    };
};
