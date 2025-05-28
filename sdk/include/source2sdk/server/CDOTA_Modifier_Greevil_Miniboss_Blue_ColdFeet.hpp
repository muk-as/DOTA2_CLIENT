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
        class CDOTA_Modifier_Greevil_Miniboss_Blue_ColdFeet : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vecStartPosition; // 0x1888            
            std::int32_t m_nCurrentTick; // 0x1894            
            float damage; // 0x1898            
            std::int32_t break_distance; // 0x189c            
            float stun_duration; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Greevil_Miniboss_Blue_ColdFeet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Greevil_Miniboss_Blue_ColdFeet) == 0x18a8);
    };
};
