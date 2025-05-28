#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"

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
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_RemoteMine : public source2sdk::client::CDOTA_Modifier_Invisible
        {
        public:
            std::int32_t radius; // 0x1898            
            std::int32_t damage; // 0x189c            
            std::int32_t radius_scepter; // 0x18a0            
            std::int32_t damage_scepter; // 0x18a4            
            std::int32_t vision_radius; // 0x18a8            
            float vision_duration; // 0x18ac            
            std::int32_t model_scale; // 0x18b0            
            bool bExploding; // 0x18b4            
            uint8_t _pad18b5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_RemoteMine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Techies_RemoteMine) == 0x18b8);
    };
};
