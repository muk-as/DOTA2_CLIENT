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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Item_Essence_Distiller_SelfXP : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t self_buff_base_hp_regen; // 0x_            
            std::int32_t level_to_experience_and_hp_regen; // 0x_            
            float m_fHealingDone; // 0x_            
            std::int32_t m_nDyingHeroLevel; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Item_Essence_Distiller_SelfXP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Item_Essence_Distiller_SelfXP) == 0x_);
    };
};
