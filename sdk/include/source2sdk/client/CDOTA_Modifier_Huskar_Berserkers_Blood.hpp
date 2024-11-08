#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Size: 0x1728
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Huskar_Berserkers_Blood : public client::CDOTA_Buff
    {
    public:
        int32_t maximum_health_regen; // 0x1708        
        int32_t maximum_attack_speed; // 0x170c        
        int32_t maximum_magic_resist; // 0x1710        
        int32_t hp_threshold_max; // 0x1714        
        bool m_bIsActive; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        int32_t aura_effectiveness; // 0x171c        
        client::ParticleIndex_t m_nFxHuskIndex; // 0x1720        
        client::ParticleIndex_t m_nFxIndexA; // 0x1724        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Huskar_Berserkers_Blood because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Huskar_Berserkers_Blood) == 0x1728);
};
