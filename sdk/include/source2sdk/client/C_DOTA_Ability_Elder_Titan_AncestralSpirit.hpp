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
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Elder_Titan_AncestralSpirit : public client::C_DOTABaseAbility
    {
    public:
        int32_t speed; // 0x5d8        
        int32_t radius; // 0x5dc        
        float buff_duration; // 0x5e0        
        float spirit_duration; // 0x5e4        
        int32_t m_nCreepsHit; // 0x5e8        
        int32_t m_nHeroesHit; // 0x5ec        
        bool m_bIsReturning; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f1[0x3]; // 0x5f1
        // m_hAncestralSpirit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAncestralSpirit;
        char m_hAncestralSpirit[0x4]; // 0x5f4        
        client::ParticleIndex_t m_nReturnFXIndex; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0x4]; // 0x5fc
        CUtlString m_strMoveSpiritSwapAbility; // 0x600        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Elder_Titan_AncestralSpirit because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Elder_Titan_AncestralSpirit) == 0x608);
};
