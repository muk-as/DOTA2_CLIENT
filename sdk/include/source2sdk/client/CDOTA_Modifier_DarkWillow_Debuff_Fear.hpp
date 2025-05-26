#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Fear.hpp"

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
        class CDOTA_Modifier_DarkWillow_Debuff_Fear : public source2sdk::client::CDOTA_Modifier_Fear
        {
        public:
            bool m_bDidGiveOrder; // 0x1878            
            uint8_t _pad1879[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_Debuff_Fear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DarkWillow_Debuff_Fear) == 0x1880);
    };
};
