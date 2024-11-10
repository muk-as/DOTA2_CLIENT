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
    class CDOTA_Ability_Wisp_Relocate : public server::CDOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndexEndTeam; // 0x5c8        
        client::ParticleIndex_t m_nFXIndexChannel; // 0x5cc        
        float cast_delay; // 0x5d0        
        float return_time; // 0x5d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Wisp_Relocate because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Wisp_Relocate) == 0x5d8);
};
