#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x18e0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Legion_Commander_Duel : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t reward_damage; // 0x1878            
            std::int32_t assist_reward_damage; // 0x187c            
            std::int32_t damage_reduction_pct; // 0x1880            
            std::int32_t debuff_immunity; // 0x1884            
            bool m_bAttacked; // 0x1888            
            bool m_bHadAVictor; // 0x1889            
            uint8_t _pad188a[0x2]; // 0x188a
            source2sdk::entity2::GameTime_t m_flTimeDuelStart; // 0x188c            
            // m_hPartner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPartner;
            char m_hPartner[0x4]; // 0x1890            
            float m_flNextTime; // 0x1894            
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x18]; // 0x1898            
            // m_hAllyAssisters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAllyAssisters;
            char m_hAllyAssisters[0x18]; // 0x18b0            
            // m_hEnemyAssisters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hEnemyAssisters;
            char m_hEnemyAssisters[0x18]; // 0x18c8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Legion_Commander_Duel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Legion_Commander_Duel) == 0x18e0);
    };
};
