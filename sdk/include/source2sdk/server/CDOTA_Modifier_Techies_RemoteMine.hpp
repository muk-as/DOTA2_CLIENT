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
        // Size: 0x1828
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Techies_RemoteMine : public source2sdk::server::CDOTA_Modifier_Invisible
        {
        public:
            std::int32_t radius; // 0x1808            
            std::int32_t damage; // 0x180c            
            std::int32_t radius_scepter; // 0x1810            
            std::int32_t damage_scepter; // 0x1814            
            std::int32_t vision_radius; // 0x1818            
            float vision_duration; // 0x181c            
            std::int32_t model_scale; // 0x1820            
            bool bExploding; // 0x1824            
            uint8_t _pad1825[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_RemoteMine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_RemoteMine) == 0x1828);
    };
};
