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
    // Size: 0x628
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds : public client::C_DOTABaseAbility
    {
    public:
        int32_t max_steps; // 0x600        
        Vector m_vTarget; // 0x604        
        Vector m_vDir; // 0x610        
        int32_t m_nSteps; // 0x61c        
        client::ParticleIndex_t m_nFXIndex; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x624[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_AghsFort_StonehallGeneral_OverwhelmingOdds) == 0x628);
};
