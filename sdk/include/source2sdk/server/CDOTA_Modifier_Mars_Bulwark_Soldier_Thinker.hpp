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
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker : public client::CDOTA_Buff
    {
    public:
        entity2::GameTime_t m_NextAttack; // 0x16e8        
        int32_t soldier_offset; // 0x16ec        
        int32_t soldier_count; // 0x16f0        
        int32_t forward_angle; // 0x16f4        
        int32_t knockback_distance; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4]; // 0x16fc
        // m_hAllSoldiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAllSoldiers;
        char m_hAllSoldiers[0x18]; // 0x1700        
        entity2::GameTime_t m_flLastStationaryTime; // 0x1718        
        Vector m_vLastStationaryPosition; // 0x171c        
        float stationary_attack_delay; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_Bulwark_Soldier_Thinker) == 0x1730);
};
