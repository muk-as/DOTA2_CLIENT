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
    #pragma pack(push, 1)
    class C_DOTA_Ability_Elder_Titan_EchoStomp : public client::C_DOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndexTitan; // 0x600        
        client::ParticleIndex_t m_nFXIndexSpirit; // 0x604        
        client::ParticleIndex_t m_nFXIndexTitanB; // 0x608        
        client::ParticleIndex_t m_nFXIndexSpiritB; // 0x60c        
        int32_t radius; // 0x610        
        int32_t stomp_damage; // 0x614        
        float sleep_duration; // 0x618        
        float cast_time; // 0x61c        
        // m_vecStompedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecStompedHeroes;
        char m_vecStompedHeroes[0x18]; // 0x620        
        // m_vecStompedHeroes_BuffCounted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecStompedHeroes_BuffCounted;
        char m_vecStompedHeroes_BuffCounted[0x18]; // 0x638        
        bool m_bStompedInvisibleHero; // 0x650        
        [[maybe_unused]] std::uint8_t pad_0x651[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Elder_Titan_EchoStomp because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Elder_Titan_EchoStomp) == 0x658);
};
