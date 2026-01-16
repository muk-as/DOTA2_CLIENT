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
        class CDOTA_Modifier_Terrorblade_Metamorphosis : public source2sdk::client::CDOTA_Buff
        {
        public:
            float base_attack_time; // 0x_            
            std::int32_t bonus_range; // 0x_            
            std::int32_t m_iOriginalAttackCapabilities; // 0x_            
            std::int32_t bonus_damage; // 0x_            
            std::int32_t speed_loss; // 0x_            
            std::int32_t attack_projectile_speed_bonus; // 0x_            
            CUtlSymbolLarge m_iszRangedAttackEffect; // 0x_            
            CUtlSymbolLarge m_iszOriginalRangedAttackEffect; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Terrorblade_Metamorphosis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Terrorblade_Metamorphosis) == 0x_);
    };
};
