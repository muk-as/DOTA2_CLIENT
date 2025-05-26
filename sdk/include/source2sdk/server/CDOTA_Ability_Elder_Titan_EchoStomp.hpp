#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x618
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Elder_Titan_EchoStomp : public source2sdk::server::CDOTABaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndexTitan; // 0x5c0            
            source2sdk::client::ParticleIndex_t m_nFXIndexSpirit; // 0x5c4            
            source2sdk::client::ParticleIndex_t m_nFXIndexTitanB; // 0x5c8            
            source2sdk::client::ParticleIndex_t m_nFXIndexSpiritB; // 0x5cc            
            float radius; // 0x5d0            
            float stomp_damage; // 0x5d4            
            float sleep_duration; // 0x5d8            
            float cast_time; // 0x5dc            
            // m_vecStompedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecStompedHeroes;
            char m_vecStompedHeroes[0x18]; // 0x5e0            
            // m_vecStompedHeroes_BuffCounted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecStompedHeroes_BuffCounted;
            char m_vecStompedHeroes_BuffCounted[0x18]; // 0x5f8            
            bool m_bStompedInvisibleHero; // 0x610            
            uint8_t _pad0611[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Elder_Titan_EchoStomp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Elder_Titan_EchoStomp) == 0x618);
    };
};
