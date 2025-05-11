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
        // Size: 0x1848
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Windrunner_UnfocusedFire : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t nQuadrant; // 0x17f8            
            std::int32_t focusfire_damage_reduction; // 0x17fc            
            std::int32_t bonus_range; // 0x1800            
            uint8_t _pad1804[0x44];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Windrunner_UnfocusedFire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Windrunner_UnfocusedFire) == 0x1848);
    };
};
