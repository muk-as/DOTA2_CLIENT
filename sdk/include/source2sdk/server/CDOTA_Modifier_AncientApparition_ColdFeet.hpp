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
        // Size: 0x1898
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_AncientApparition_ColdFeet : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vecStartPosition; // 0x1878            
            std::int32_t m_nCurrentTick; // 0x1884            
            float break_distance; // 0x1888            
            float stun_duration; // 0x188c            
            std::int32_t frost_stacks; // 0x1890            
            float aoe; // 0x1894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_AncientApparition_ColdFeet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_AncientApparition_ColdFeet) == 0x1898);
    };
};
