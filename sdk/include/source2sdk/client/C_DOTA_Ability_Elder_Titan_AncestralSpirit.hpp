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
    class C_DOTA_Ability_Elder_Titan_AncestralSpirit : public client::C_DOTABaseAbility
    {
    public:
        int32_t speed; // 0x600        
        int32_t radius; // 0x604        
        float buff_duration; // 0x608        
        float spirit_duration; // 0x60c        
        int32_t m_nCreepsHit; // 0x610        
        int32_t m_nHeroesHit; // 0x614        
        bool m_bIsReturning; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x619[0x3]; // 0x619
        // m_hAncestralSpirit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAncestralSpirit;
        char m_hAncestralSpirit[0x4]; // 0x61c        
        client::ParticleIndex_t m_nReturnFXIndex; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x624[0x4]; // 0x624
        CUtlString m_strMoveSpiritSwapAbility; // 0x628        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Elder_Titan_AncestralSpirit because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Elder_Titan_AncestralSpirit) == 0x630);
};
