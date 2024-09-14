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
    // Size: 0x658
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Mirana_Arrow : public client::C_DOTABaseAbility
    {
    public:
        int32_t scepter_radius; // 0x5d8        
        Vector m_vStartPos; // 0x5dc        
        client::ParticleIndex_t m_nFXIndex; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4]; // 0x5ec
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> hAlreadyHitList[2];
        char hAlreadyHitList[0x30]; // 0x5f0        
        // hStarfallList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> hStarfallList[2];
        char hStarfallList[0x30]; // 0x620        
        int32_t m_nActiveArrow; // 0x650        
        [[maybe_unused]] std::uint8_t pad_0x654[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Mirana_Arrow because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Mirana_Arrow) == 0x658);
};
