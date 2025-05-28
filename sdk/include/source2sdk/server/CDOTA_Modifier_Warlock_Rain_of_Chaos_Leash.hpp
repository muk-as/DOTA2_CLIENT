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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Warlock_Rain_of_Chaos_Leash : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flMaxMovespeed; // 0x1888            
            float leash_start_radius; // 0x188c            
            float leash_radius; // 0x1890            
            float leashed_movespeed; // 0x1894            
            Vector2D m_vStartLoc; // 0x1898            
            float m_flLastMaxMovespeed; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Warlock_Rain_of_Chaos_Leash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Warlock_Rain_of_Chaos_Leash) == 0x18a8);
    };
};
