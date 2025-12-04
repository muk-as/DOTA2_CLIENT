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
        class CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t heal; // 0x_            
            float mana_per_second; // 0x_            
            float heal_interval; // 0x_            
            std::int32_t does_heal_all_allies; // 0x_            
            std::int32_t does_damage; // 0x_            
            std::int32_t self_only_heal_percentage; // 0x_            
            float m_flTotalHealing; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal) == 0x_);
    };
};
