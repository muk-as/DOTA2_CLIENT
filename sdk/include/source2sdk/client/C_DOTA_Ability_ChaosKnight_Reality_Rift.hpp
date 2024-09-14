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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_ChaosKnight_Reality_Rift : public client::C_DOTABaseAbility
    {
    public:
        float m_flPercentage; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4]; // 0x5dc
        // m_FXIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_FXIndex;
        char m_FXIndex[0x18]; // 0x5e0        
        // m_hRiftIllusion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hRiftIllusion;
        char m_hRiftIllusion[0x4]; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_ChaosKnight_Reality_Rift because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_ChaosKnight_Reality_Rift) == 0x600);
};
