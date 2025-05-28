#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
        // Size: 0x18d0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Riki_TricksOfTheTrade_Phase : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFxIndex; // 0x1888            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x188c            
            source2sdk::server::CountdownTimer m_Timer; // 0x1890            
            // m_hPreviousTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPreviousTarget;
            char m_hPreviousTarget[0x4]; // 0x18a8            
            std::int32_t m_nSucceessiveHits; // 0x18ac            
            bool m_bGrantedGem; // 0x18b0            
            uint8_t _pad18b1[0x3]; // 0x18b1
            float attack_rate; // 0x18b4            
            std::int32_t damage_pct; // 0x18b8            
            std::int32_t agility_pct; // 0x18bc            
            float creep_agility_multiplier; // 0x18c0            
            float m_flMultiplier; // 0x18c4            
            float cooldown_reduction_per_creep_kill; // 0x18c8            
            uint8_t _pad18cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Riki_TricksOfTheTrade_Phase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Riki_TricksOfTheTrade_Phase) == 0x18d0);
    };
};
