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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Huskar_Berserkers_Blood_Transfusion : public client::CDOTA_Buff
    {
    public:
        int32_t maximum_health_regen; // 0x16e8        
        int32_t maximum_attack_speed; // 0x16ec        
        int32_t maximum_magic_resist; // 0x16f0        
        int32_t hp_threshold_max; // 0x16f4        
        client::ParticleIndex_t m_nFxHuskIndex; // 0x16f8        
        client::ParticleIndex_t m_nFxIndexA; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Huskar_Berserkers_Blood_Transfusion because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Huskar_Berserkers_Blood_Transfusion) == 0x1700);
};
