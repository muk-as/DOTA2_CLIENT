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
        // Size: 0x1948
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Lua : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1878[0xc8]; // 0x1878
            bool m_bHasCustomTransmitterData; // 0x1940            
            uint8_t _pad1941[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Lua because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Lua) == 0x1948);
    };
};
