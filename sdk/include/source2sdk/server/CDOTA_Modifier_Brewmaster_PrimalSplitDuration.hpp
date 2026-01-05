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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Brewmaster_PrimalSplitDuration : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t bonus_brewling_hp; // 0x_            
            std::int32_t bonus_damage; // 0x_            
            std::int32_t hp_per_attribute; // 0x_            
            float dmg_per_attribute; // 0x_            
            std::int32_t attribute_share_pct; // 0x_            
            std::int32_t m_nBonusHP; // 0x_            
            std::int32_t m_nBonusDamage; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Brewmaster_PrimalSplitDuration because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Brewmaster_PrimalSplitDuration) == 0x_);
    };
};
