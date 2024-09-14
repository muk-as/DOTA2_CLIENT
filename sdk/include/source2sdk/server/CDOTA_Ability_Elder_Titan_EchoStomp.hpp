#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Elder_Titan_EchoStomp : public server::CDOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndexTitan; // 0x5a0        
        client::ParticleIndex_t m_nFXIndexSpirit; // 0x5a4        
        client::ParticleIndex_t m_nFXIndexTitanB; // 0x5a8        
        client::ParticleIndex_t m_nFXIndexSpiritB; // 0x5ac        
        int32_t radius; // 0x5b0        
        int32_t stomp_damage; // 0x5b4        
        float sleep_duration; // 0x5b8        
        float cast_time; // 0x5bc        
        // m_vecStompedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecStompedHeroes;
        char m_vecStompedHeroes[0x18]; // 0x5c0        
        // m_vecStompedHeroes_BuffCounted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecStompedHeroes_BuffCounted;
        char m_vecStompedHeroes_BuffCounted[0x18]; // 0x5d8        
        bool m_bStompedInvisibleHero; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x5f1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Elder_Titan_EchoStomp because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Elder_Titan_EchoStomp) == 0x5f8);
};
