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
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Furion_Teleportation : public server::CDOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndexStart; // 0x5c8        
        client::ParticleIndex_t m_nFXIndexEnd; // 0x5cc        
        client::ParticleIndex_t m_nFXIndexEndTeam; // 0x5d0        
        [[maybe_unused]] std::uint8_t pad_0x5d4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Furion_Teleportation because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Furion_Teleportation) == 0x5d8);
};
