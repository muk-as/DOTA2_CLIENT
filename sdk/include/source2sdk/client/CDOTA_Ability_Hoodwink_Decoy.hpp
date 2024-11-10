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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Hoodwink_Decoy : public client::C_DOTABaseAbility
    {
    public:
        // hIllusion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> hIllusion;
        char hIllusion[0x18]; // 0x600        
        float decoy_stun_duration; // 0x618        
        int32_t decoy_detonate_radius; // 0x61c        
        int32_t projectile_speed; // 0x620        
        client::ParticleIndex_t m_nFXIndex; // 0x624        
        [[maybe_unused]] std::uint8_t pad_0x628[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Hoodwink_Decoy because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Hoodwink_Decoy) == 0x630);
};
