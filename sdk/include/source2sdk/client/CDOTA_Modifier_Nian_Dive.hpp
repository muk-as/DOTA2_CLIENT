#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1768
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Nian_Dive : public client::CDOTA_Buff
    {
    public:
        int32_t pounce_distance; // 0x1708        
        float pounce_speed; // 0x170c        
        float pounce_acceleration; // 0x1710        
        int32_t pounce_radius; // 0x1714        
        int32_t pounce_damage; // 0x1718        
        int32_t stun_radius; // 0x171c        
        float stun_duration; // 0x1720        
        float leash_duration; // 0x1724        
        float initial_delay; // 0x1728        
        float landing_delay; // 0x172c        
        float vertical_adjust; // 0x1730        
        float vertical_adjust_max_distance; // 0x1734        
        float vertical_adjust_min_distance; // 0x1738        
        int32_t claw_damage; // 0x173c        
        int32_t claw_damage_radius; // 0x1740        
        float claw_damage_delay; // 0x1744        
        float claw_damage_duration; // 0x1748        
        [[maybe_unused]] std::uint8_t pad_0x174c[0x4]; // 0x174c
        // m_vHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vHitEntities;
        char m_vHitEntities[0x18]; // 0x1750        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Dive because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Nian_Dive) == 0x1768);
};
