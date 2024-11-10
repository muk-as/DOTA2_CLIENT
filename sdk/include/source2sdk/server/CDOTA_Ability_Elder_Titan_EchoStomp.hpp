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
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Elder_Titan_EchoStomp : public server::CDOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndexTitan; // 0x5c8        
        client::ParticleIndex_t m_nFXIndexSpirit; // 0x5cc        
        client::ParticleIndex_t m_nFXIndexTitanB; // 0x5d0        
        client::ParticleIndex_t m_nFXIndexSpiritB; // 0x5d4        
        int32_t radius; // 0x5d8        
        int32_t stomp_damage; // 0x5dc        
        float sleep_duration; // 0x5e0        
        float cast_time; // 0x5e4        
        // m_vecStompedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecStompedHeroes;
        char m_vecStompedHeroes[0x18]; // 0x5e8        
        // m_vecStompedHeroes_BuffCounted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecStompedHeroes_BuffCounted;
        char m_vecStompedHeroes_BuffCounted[0x18]; // 0x600        
        bool m_bStompedInvisibleHero; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x619[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Elder_Titan_EchoStomp because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Elder_Titan_EchoStomp) == 0x620);
};
