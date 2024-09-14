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
    // Size: 0x7f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Hoodwink_Bushwhack : public client::C_DOTABaseAbility
    {
    public:
        int32_t trap_radius; // 0x5d8        
        int32_t m_nProjectileHandle; // 0x5dc        
        client::ParticleIndex_t m_nFXIndex; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x20c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Hoodwink_Bushwhack because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Hoodwink_Bushwhack) == 0x7f0);
};
