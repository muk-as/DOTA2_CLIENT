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
        // Size: 0x1958
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Weaver_TimeLapse : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_PositionIndex[11]; // 0x1878            
            float m_flLife[11]; // 0x18fc            
            float m_flMana[11]; // 0x1928            
            bool m_bHasValidHistory; // 0x1954            
            uint8_t _pad1955[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Weaver_TimeLapse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Weaver_TimeLapse) == 0x1958);
    };
};
