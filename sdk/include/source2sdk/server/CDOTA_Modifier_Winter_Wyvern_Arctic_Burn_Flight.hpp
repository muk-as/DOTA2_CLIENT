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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_point; // 0x1888            
            std::int32_t attack_range_bonus; // 0x188c            
            std::int32_t projectile_speed_bonus; // 0x1890            
            std::int32_t night_vision_bonus; // 0x1894            
            std::int32_t movement_scepter; // 0x1898            
            uint8_t _pad189c[0x4]; // 0x189c
            CUtlSymbolLarge m_iszRangedAttackEffect; // 0x18a0            
            std::int32_t max_attacks; // 0x18a8            
            std::int32_t m_iNumAttacks; // 0x18ac            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight) == 0x18b0);
    };
};
