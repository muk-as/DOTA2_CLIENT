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
    class CDOTA_Ability_Visage_SoulAssumption : public server::CDOTABaseAbility
    {
    public:
        float m_fDamage; // 0x5c8        
        client::ParticleIndex_t m_nFXIndex; // 0x5cc        
        int32_t m_iForcedStacks; // 0x5d0        
        int32_t m_nGold; // 0x5d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Visage_SoulAssumption because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Visage_SoulAssumption) == 0x5d8);
};
