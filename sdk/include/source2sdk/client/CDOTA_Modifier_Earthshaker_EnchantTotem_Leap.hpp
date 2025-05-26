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
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Earthshaker_EnchantTotem_Leap : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1878[0x8];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Earthshaker_EnchantTotem_Leap) == 0x1880);
    };
};
