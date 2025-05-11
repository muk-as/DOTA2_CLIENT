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
        // Size: 0x1810
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Gyrocopter_Flak_Cannon : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t max_attacks; // 0x17f8            
            std::int32_t bonus_damage; // 0x17fc            
            std::int32_t m_iNumAttacks; // 0x1800            
            std::int32_t projectile_speed; // 0x1804            
            std::int32_t bonus_night_vision; // 0x1808            
            float radius; // 0x180c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Gyrocopter_Flak_Cannon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Gyrocopter_Flak_Cannon) == 0x1810);
    };
};
