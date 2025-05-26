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
        // Size: 0x1888
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Hoodwink_Sharpshooter_VisionThinker : public source2sdk::client::CDOTA_Buff
        {
        public:
            float arrow_width; // 0x1878            
            bool vision_along_indicator; // 0x187c            
            uint8_t _pad187d[0x3]; // 0x187d
            float vision_radius_buffer; // 0x1880            
            uint8_t _pad1884[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Hoodwink_Sharpshooter_VisionThinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Hoodwink_Sharpshooter_VisionThinker) == 0x1888);
    };
};
