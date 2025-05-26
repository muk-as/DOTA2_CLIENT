#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Elder_Titan_EchoStomp : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndexTitan; // 0x680            
            source2sdk::client::ParticleIndex_t m_nFXIndexSpirit; // 0x684            
            source2sdk::client::ParticleIndex_t m_nFXIndexTitanB; // 0x688            
            source2sdk::client::ParticleIndex_t m_nFXIndexSpiritB; // 0x68c            
            float radius; // 0x690            
            float stomp_damage; // 0x694            
            float sleep_duration; // 0x698            
            float cast_time; // 0x69c            
            // m_vecStompedHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecStompedHeroes;
            char m_vecStompedHeroes[0x18]; // 0x6a0            
            // m_vecStompedHeroes_BuffCounted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecStompedHeroes_BuffCounted;
            char m_vecStompedHeroes_BuffCounted[0x18]; // 0x6b8            
            bool m_bStompedInvisibleHero; // 0x6d0            
            uint8_t _pad06d1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Elder_Titan_EchoStomp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Elder_Titan_EchoStomp) == 0x6d8);
    };
};
