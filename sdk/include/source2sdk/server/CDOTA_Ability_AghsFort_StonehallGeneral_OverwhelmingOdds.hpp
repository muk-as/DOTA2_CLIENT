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
    // Size: 0x5f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds : public server::CDOTABaseAbility
    {
    public:
        int32_t max_steps; // 0x5c8        
        Vector m_vTarget; // 0x5cc        
        Vector m_vDir; // 0x5d8        
        int32_t m_nSteps; // 0x5e4        
        client::ParticleIndex_t m_nFXIndex; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds) == 0x5f0);
};
