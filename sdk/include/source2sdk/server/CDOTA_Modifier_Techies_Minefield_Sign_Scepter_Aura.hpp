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
        class CDOTA_Modifier_Techies_Minefield_Sign_Scepter_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            float aura_radius; // 0x1888            
            float scepter_move_damage; // 0x188c            
            float scepter_move_amt; // 0x1890            
            float minefield_duration; // 0x1894            
            float m_flMoveAmount; // 0x1898            
            Vector m_vLastPosition; // 0x189c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Techies_Minefield_Sign_Scepter_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Techies_Minefield_Sign_Scepter_Aura) == 0x18a8);
    };
};
