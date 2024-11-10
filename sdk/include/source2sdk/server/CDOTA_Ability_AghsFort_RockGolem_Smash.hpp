#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_AghsFort_RockGolem_Smash : public server::CDOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nPreviewFX; // 0x5c8        
        Vector m_vTargetLoc; // 0x5cc        
        [[maybe_unused]] std::uint8_t pad_0x5d8[0x8]; // 0x5d8
        int32_t radius; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_RockGolem_Smash because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AghsFort_RockGolem_Smash) == 0x5e8);
};
