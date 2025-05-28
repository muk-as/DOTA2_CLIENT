#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff_Item.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Mechanical_Arm : public source2sdk::client::CDOTA_Buff_Item
        {
        public:
            bool m_bAppliesToCreeps; // 0x1888            
            uint8_t _pad1889[0x3]; // 0x1889
            float bat; // 0x188c            
            float stun_duration; // 0x1890            
            std::int32_t stun_chance; // 0x1894            
            std::int32_t m_nAttack; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Mechanical_Arm because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Mechanical_Arm) == 0x18a0);
    };
};
