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
        // Size: 0x1818
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t heal; // 0x17f8            
            float mana_per_second; // 0x17fc            
            float heal_interval; // 0x1800            
            std::int32_t does_heal_all_allies; // 0x1804            
            std::int32_t does_damage; // 0x1808            
            std::int32_t self_only_heal_percentage; // 0x180c            
            float m_flTotalHealing; // 0x1810            
            uint8_t _pad1814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_WitchDoctor_Voodoo_Restoration_Heal) == 0x1818);
    };
};
