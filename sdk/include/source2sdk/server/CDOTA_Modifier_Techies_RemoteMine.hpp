#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"

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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_RemoteMine : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            std::int32_t radius; // 0x_            
            std::int32_t damage; // 0x_            
            std::int32_t radius_scepter; // 0x_            
            std::int32_t damage_scepter; // 0x_            
            std::int32_t vision_radius; // 0x_            
            float vision_duration; // 0x_            
            std::int32_t model_scale; // 0x_            
            bool bExploding; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_RemoteMine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_RemoteMine) == 0x_);
    };
};
