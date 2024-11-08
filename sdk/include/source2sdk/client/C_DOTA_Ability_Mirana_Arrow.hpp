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
    // Size: 0x680
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Mirana_Arrow : public client::C_DOTABaseAbility
    {
    public:
        int32_t scepter_radius; // 0x600        
        Vector m_vStartPos; // 0x604        
        client::ParticleIndex_t m_nFXIndex; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4]; // 0x614
        // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> hAlreadyHitList[2];
        char hAlreadyHitList[0x30]; // 0x618        
        // hStarfallList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> hStarfallList[2];
        char hStarfallList[0x30]; // 0x648        
        int32_t m_nActiveArrow; // 0x678        
        [[maybe_unused]] std::uint8_t pad_0x67c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Mirana_Arrow because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Mirana_Arrow) == 0x680);
};
