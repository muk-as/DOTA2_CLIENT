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
    // Size: 0x1748
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DarkWillow_Terrorize_Thinker : public client::CDOTA_Buff
    {
    public:
        // m_hWisp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hWisp;
        char m_hWisp[0x4]; // 0x1708        
        int32_t destination_travel_speed; // 0x170c        
        int32_t return_travel_speed; // 0x1710        
        int32_t destination_radius; // 0x1714        
        float impact_damage; // 0x1718        
        float destination_status_duration; // 0x171c        
        float initial_delay; // 0x1720        
        float starting_height; // 0x1724        
        Vector m_vAttackLocation; // 0x1728        
        bool m_bAttacking; // 0x1734        
        bool m_bReturning; // 0x1735        
        [[maybe_unused]] std::uint8_t pad_0x1736[0x2]; // 0x1736
        float m_fCurHeight; // 0x1738        
        float m_fEstimatedTravelTime; // 0x173c        
        float think_interval; // 0x1740        
        bool m_bInFlight; // 0x1744        
        [[maybe_unused]] std::uint8_t pad_0x1745[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_Terrorize_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkWillow_Terrorize_Thinker) == 0x1748);
};
