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
    // Size: 0x1730
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Dawnbreaker_Solar_Guardian_AirTime : public client::CDOTA_Buff
    {
    public:
        float m_flStartZ; // 0x16e8        
        float m_flCurTime; // 0x16ec        
        Vector m_vDirection; // 0x16f0        
        float m_flEndTime; // 0x16fc        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x1700        
        Vector m_vCurrentTargetPosition; // 0x1704        
        Vector m_vDesiredTargetPosition; // 0x1710        
        Vector m_vStartPosition; // 0x171c        
        int32_t airtime_scepter_movement_speed; // 0x1728        
        [[maybe_unused]] std::uint8_t pad_0x172c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Dawnbreaker_Solar_Guardian_AirTime because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Dawnbreaker_Solar_Guardian_AirTime) == 0x1730);
};
