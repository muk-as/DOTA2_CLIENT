#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Buff_Item.hpp"

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
        // Size: 0x18a0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Safety_Bubble : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t m_nDamageAbsorbed; // 0x1888            
            source2sdk::entity2::GameTime_t m_timeLastDamage; // 0x188c            
            std::int32_t bonus_hp_regen; // 0x1890            
            std::int32_t shield; // 0x1894            
            float restore_time; // 0x1898            
            uint8_t _pad189c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Safety_Bubble because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Safety_Bubble) == 0x18a0);
    };
};
