#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16f8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck : public client::CDOTA_Buff
    {
    public:
        bool m_bCanBeResummoned; // 0x16e8        
        bool m_bCanAttack; // 0x16e9        
        [[maybe_unused]] std::uint8_t pad_0x16ea[0x2]; // 0x16ea
        client::ParticleIndex_t m_nFxIndex; // 0x16ec        
        client::ParticleIndex_t m_nStatusFxIndex; // 0x16f0        
        int32_t bear_attack_leash_range; // 0x16f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck) == 0x16f8);
};
