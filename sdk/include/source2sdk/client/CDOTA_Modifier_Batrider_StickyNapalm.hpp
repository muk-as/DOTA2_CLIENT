#pragma once
#include "source2sdk/client/CDOTA_Modifier_Stacking_Base.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Batrider_StickyNapalm : public client::CDOTA_Modifier_Stacking_Base
    {
    public:
        float movement_speed_pct; // 0x16e8        
        int32_t turn_rate_pct; // 0x16ec        
        int32_t damage; // 0x16f0        
        int32_t application_damage; // 0x16f4        
        int32_t building_damage_pct; // 0x16f8        
        int32_t creep_damage_pct; // 0x16fc        
        client::ParticleIndex_t m_nFXIndex; // 0x1700        
        client::ParticleIndex_t m_nFXStackIndex; // 0x1704        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Batrider_StickyNapalm because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Batrider_StickyNapalm) == 0x1708);
};