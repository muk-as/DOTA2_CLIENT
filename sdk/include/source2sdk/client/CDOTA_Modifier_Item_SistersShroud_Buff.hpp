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
        class CDOTA_Modifier_Item_SistersShroud_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            float evasion_max; // 0x1878            
            float evasion_loss; // 0x187c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_SistersShroud_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_SistersShroud_Buff) == 0x1880);
    };
};
