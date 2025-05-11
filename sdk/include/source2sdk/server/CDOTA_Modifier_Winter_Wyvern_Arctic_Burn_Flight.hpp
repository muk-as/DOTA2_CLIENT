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
        // Size: 0x1820
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight : public source2sdk::client::CDOTA_Buff
        {
        public:
            float attack_point; // 0x17f8            
            std::int32_t attack_range_bonus; // 0x17fc            
            std::int32_t projectile_speed_bonus; // 0x1800            
            std::int32_t night_vision_bonus; // 0x1804            
            std::int32_t movement_scepter; // 0x1808            
            uint8_t _pad180c[0x4]; // 0x180c
            CUtlSymbolLarge m_iszRangedAttackEffect; // 0x1810            
            std::int32_t max_attacks; // 0x1818            
            std::int32_t m_iNumAttacks; // 0x181c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight) == 0x1820);
    };
};
