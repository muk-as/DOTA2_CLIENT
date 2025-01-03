#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DarkWillow_Bedlam : public client::CDOTA_Buff
    {
    public:
        float m_flRotation; // 0x1708        
        // m_hWisp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hWisp;
        char m_hWisp[0x4]; // 0x170c        
        entity2::GameTime_t m_flLastAttack; // 0x1710        
        int32_t roaming_radius; // 0x1714        
        int32_t attack_radius; // 0x1718        
        float roaming_seconds_per_rotation; // 0x171c        
        float attack_interval; // 0x1720        
        int32_t target_count; // 0x1724        
        bool m_bTravelling; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x1729[0x3]; // 0x1729
        int32_t travel_speed; // 0x172c        
        int32_t damage_reduction_pct; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_Bedlam because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkWillow_Bedlam) == 0x1738);
};
