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
        // Size: 0x18b0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1878            
            std::int32_t m_nAlliesTaunted; // 0x187c            
            bool m_bRelicTriggered; // 0x1880            
            uint8_t _pad1881[0x3]; // 0x1881
            float radius; // 0x1884            
            std::int32_t damage_reduction; // 0x1888            
            source2sdk::entity2::GameTime_t m_flLastSeen; // 0x188c            
            bool transfer_on_death; // 0x1890            
            uint8_t _pad1891[0x7]; // 0x1891
            // m_vhAffectedEnemyHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vhAffectedEnemyHeroes;
            char m_vhAffectedEnemyHeroes[0x18]; // 0x1898            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Winter_Wyvern_Winters_Curse_Aura) == 0x18b0);
    };
};
