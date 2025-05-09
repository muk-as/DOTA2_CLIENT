#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker : public client::CDOTA_Buff
    {
    public:
        entity2::GameTime_t m_NextAttack; // 0x1708        
        int32_t soldier_offset; // 0x170c        
        int32_t soldier_count; // 0x1710        
        int32_t forward_angle; // 0x1714        
        int32_t knockback_distance; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4]; // 0x171c
        // m_hAllSoldiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAllSoldiers;
        char m_hAllSoldiers[0x18]; // 0x1720        
        entity2::GameTime_t m_flLastStationaryTime; // 0x1738        
        Vector m_vLastStationaryPosition; // 0x173c        
        float stationary_attack_delay; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker) == 0x1750);
};
