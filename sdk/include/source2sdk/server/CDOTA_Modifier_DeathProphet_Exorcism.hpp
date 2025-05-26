#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct sSpiritInfo;
    };
};
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
        class CDOTA_Modifier_DeathProphet_Exorcism : public source2sdk::client::CDOTA_Buff
        {
        public:
            float radius; // 0x1878            
            std::int32_t spirit_speed; // 0x187c            
            std::int32_t max_distance; // 0x1880            
            std::int32_t give_up_distance; // 0x1884            
            std::int32_t heal_percent; // 0x1888            
            std::int32_t spirit_duration; // 0x188c            
            float ghost_spawn_rate; // 0x1890            
            std::int32_t movement_bonus; // 0x1894            
            std::int32_t m_iSpirits; // 0x1898            
            source2sdk::entity2::GameTime_t m_fStartTime; // 0x189c            
            source2sdk::entity2::GameTime_t m_fLastThinkTime; // 0x18a0            
            source2sdk::entity2::GameTime_t m_fSpawnTime; // 0x18a4            
            bool m_bFirstSpawn; // 0x18a8            
            bool m_bCommentedOnExpired; // 0x18a9            
            bool m_bForceExpired; // 0x18aa            
            uint8_t _pad18ab[0x5]; // 0x18ab
            // m_vecDeadHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecDeadHeroes;
            char m_vecDeadHeroes[0x18]; // 0x18b0            
            // m_vecSpirits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::sSpiritInfo*> m_vecSpirits;
            char m_vecSpirits[0x18]; // 0x18c8            
            uint8_t _pad18e0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DeathProphet_Exorcism because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_DeathProphet_Exorcism) == 0x18f8);
    };
};
