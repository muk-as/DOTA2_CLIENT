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
        class CDOTA_Modifier_Invoker_ChaosMeteor_Land : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vDir; // 0x1878            
            std::int32_t travel_speed; // 0x1884            
            std::int32_t acceleration; // 0x1888            
            std::int32_t travel_distance; // 0x188c            
            std::int32_t vision_distance; // 0x1890            
            float spell_amp; // 0x1894            
            float spell_lifesteal; // 0x1898            
            float stun_duration; // 0x189c            
            std::int32_t area_of_effect; // 0x18a0            
            uint8_t _pad18a4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Invoker_ChaosMeteor_Land because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Invoker_ChaosMeteor_Land) == 0x18a8);
    };
};
