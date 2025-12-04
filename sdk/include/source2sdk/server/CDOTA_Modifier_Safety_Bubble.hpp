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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Safety_Bubble : public source2sdk::server::CDOTA_Buff_Item
        {
        public:
            std::int32_t m_nDamageAbsorbed; // 0x_            
            source2sdk::entity2::GameTime_t m_timeLastDamage; // 0x_            
            std::int32_t bonus_hp_regen; // 0x_            
            std::int32_t shield; // 0x_            
            float restore_time; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Safety_Bubble because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Safety_Bubble) == 0x_);
    };
};
