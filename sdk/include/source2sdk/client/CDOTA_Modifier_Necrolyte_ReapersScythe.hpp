#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Stunned.hpp"

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
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Necrolyte_ReapersScythe : public source2sdk::client::CDOTA_Modifier_Stunned
        {
        public:
            float stun_duration; // 0x1878            
            bool m_bIllusion; // 0x187c            
            bool m_bArcWardenClone; // 0x187d            
            bool m_bSpiritBear; // 0x187e            
            uint8_t _pad187f[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Necrolyte_ReapersScythe because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Necrolyte_ReapersScythe) == 0x1880);
    };
};
