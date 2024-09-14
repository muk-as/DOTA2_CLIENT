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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1728
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DarkWillow_Terrorize_Thinker : public client::CDOTA_Buff
    {
    public:
        // m_hWisp has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hWisp;
        char m_hWisp[0x4]; // 0x16e8        
        int32_t destination_travel_speed; // 0x16ec        
        int32_t return_travel_speed; // 0x16f0        
        int32_t destination_radius; // 0x16f4        
        float impact_damage; // 0x16f8        
        float destination_status_duration; // 0x16fc        
        float initial_delay; // 0x1700        
        float starting_height; // 0x1704        
        Vector m_vAttackLocation; // 0x1708        
        bool m_bAttacking; // 0x1714        
        bool m_bReturning; // 0x1715        
        [[maybe_unused]] std::uint8_t pad_0x1716[0x2]; // 0x1716
        float m_fCurHeight; // 0x1718        
        float m_fEstimatedTravelTime; // 0x171c        
        float think_interval; // 0x1720        
        bool m_bInFlight; // 0x1724        
        [[maybe_unused]] std::uint8_t pad_0x1725[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_Terrorize_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkWillow_Terrorize_Thinker) == 0x1728);
};
