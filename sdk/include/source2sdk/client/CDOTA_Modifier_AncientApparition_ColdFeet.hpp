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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AncientApparition_ColdFeet : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vecStartPosition; // 0x1888            
            std::int32_t m_nCurrentTick; // 0x1894            
            float break_distance; // 0x1898            
            float stun_duration; // 0x189c            
            std::int32_t frost_stacks; // 0x18a0            
            float aoe; // 0x18a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AncientApparition_ColdFeet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_AncientApparition_ColdFeet) == 0x18a8);
    };
};
