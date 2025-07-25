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
        class CDOTA_Modifier_Sand_King_BurrowStrike : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vPopupLocation; // 0x1878            
            bool m_bTeleported; // 0x1884            
            bool m_bPreviouslyBurrowed; // 0x1885            
            uint8_t _pad1886[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Sand_King_BurrowStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Sand_King_BurrowStrike) == 0x1888);
    };
};
