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
        // Size: 0x1890
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Visage_GravekeepersCloak_Stack : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bIsRecovering; // 0x1878            
            uint8_t _pad1879[0x3]; // 0x1879
            std::int32_t m_nFXIndex[4]; // 0x187c            
            uint8_t _pad188c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Visage_GravekeepersCloak_Stack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Visage_GravekeepersCloak_Stack) == 0x1890);
    };
};
