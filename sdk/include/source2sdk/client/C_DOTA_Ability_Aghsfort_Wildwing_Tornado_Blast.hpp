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
    class C_DOTA_Ability_Aghsfort_Wildwing_Tornado_Blast : public client::C_DOTABaseAbility
    {
    public:
        float disable_duration; // 0x600        
        float damage; // 0x604        
        client::ParticleIndex_t m_nPreviewFX; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x60c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Aghsfort_Wildwing_Tornado_Blast because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Aghsfort_Wildwing_Tornado_Blast) == 0x610);
};
