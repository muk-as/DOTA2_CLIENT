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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Visage_SoulAssumption : public client::C_DOTABaseAbility
    {
    public:
        float m_fDamage; // 0x600        
        client::ParticleIndex_t m_nFXIndex; // 0x604        
        int32_t m_iForcedStacks; // 0x608        
        int32_t m_nGold; // 0x60c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Visage_SoulAssumption because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Visage_SoulAssumption) == 0x610);
};
