#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18f8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Rattletrap_JetPack : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t m_nMovementSpeed; // 0x1878            
            std::int32_t bonus_speed; // 0x187c            
            float turn_rate; // 0x1880            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x1884            
            float tick_interval; // 0x1888            
            float m_flFacingTarget; // 0x188c            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1890            
            uint8_t _pad1894[0x4]; // 0x1894
            // m_flTurnHistory has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flTurnHistory;
            char m_flTurnHistory[0x18]; // 0x1898            
            // m_vecHeroesHitLastRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHeroesHitLastRicochet;
            char m_vecHeroesHitLastRicochet[0x18]; // 0x18b0            
            // m_vecHeroesCredited has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHeroesCredited;
            char m_vecHeroesCredited[0x18]; // 0x18c8            
            // m_vecHeroesHitCurrentRicochet has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecHeroesHitCurrentRicochet;
            char m_vecHeroesHitCurrentRicochet[0x18]; // 0x18e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Rattletrap_JetPack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Rattletrap_JetPack) == 0x18f8);
    };
};
