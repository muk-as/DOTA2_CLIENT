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
    class C_DOTA_Ability_SandKing_Epicenter : public client::C_DOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXEpicenterIndex; // 0x600        
        int32_t m_iExplosionQuadrant; // 0x604        
        int32_t m_iExplosionDistance; // 0x608        
        client::ParticleIndex_t m_nFXIndex; // 0x60c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_SandKing_Epicenter because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_SandKing_Epicenter) == 0x610);
};
