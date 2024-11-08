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
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Nyx_Assassin_Burrow : public client::C_DOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nSpellStartFXIndex; // 0x600        
        client::ParticleIndex_t m_nPhaseStartFXIndex; // 0x604        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Nyx_Assassin_Burrow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Nyx_Assassin_Burrow) == 0x608);
};
