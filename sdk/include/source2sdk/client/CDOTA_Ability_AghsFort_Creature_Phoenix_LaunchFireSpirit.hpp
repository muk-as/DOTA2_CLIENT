#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_AghsFort_Creature_Phoenix_LaunchFireSpirit : public client::C_DOTABaseAbility
    {
    public:
        int32_t spirit_speed; // 0x600        
        float duration; // 0x604        
        int32_t radius; // 0x608        
        int32_t hp_cost_perc; // 0x60c        
        client::ParticleIndex_t m_nFXIndex; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_Creature_Phoenix_LaunchFireSpirit because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AghsFort_Creature_Phoenix_LaunchFireSpirit) == 0x618);
};
