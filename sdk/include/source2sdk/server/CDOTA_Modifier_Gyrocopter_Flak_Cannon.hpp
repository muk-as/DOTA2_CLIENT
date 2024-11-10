#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Gyrocopter_Flak_Cannon : public client::CDOTA_Buff
    {
    public:
        int32_t max_attacks; // 0x1708        
        int32_t bonus_damage; // 0x170c        
        int32_t m_iNumAttacks; // 0x1710        
        int32_t projectile_speed; // 0x1714        
        int32_t bonus_night_vision; // 0x1718        
        int32_t radius; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Gyrocopter_Flak_Cannon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Gyrocopter_Flak_Cannon) == 0x1720);
};
