#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class C_DOTA_Ability_DeathProphet_CarrionSwarm : public client::C_DOTABaseAbility
    {
    public:
        int32_t start_radius; // 0x600        
        int32_t end_radius; // 0x604        
        entity2::GameTime_t m_fStartTime; // 0x608        
        float m_fTotalTime; // 0x60c        
        int32_t m_nProjectileHandle; // 0x610        
        client::ParticleIndex_t m_nFXIndex; // 0x614        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_DeathProphet_CarrionSwarm because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_DeathProphet_CarrionSwarm) == 0x618);
};
