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
        // Size: 0x1840
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Riki_TricksOfTheTrade_Phase : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFxIndex; // 0x17f8            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x17fc            
            source2sdk::server::CountdownTimer m_Timer; // 0x1800            
            // m_hPreviousTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPreviousTarget;
            char m_hPreviousTarget[0x4]; // 0x1818            
            std::int32_t m_nSucceessiveHits; // 0x181c            
            bool m_bGrantedGem; // 0x1820            
            uint8_t _pad1821[0x3]; // 0x1821
            float attack_rate; // 0x1824            
            std::int32_t damage_pct; // 0x1828            
            std::int32_t agility_pct; // 0x182c            
            float creep_agility_multiplier; // 0x1830            
            float m_flMultiplier; // 0x1834            
            float cooldown_reduction_per_creep_kill; // 0x1838            
            uint8_t _pad183c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Riki_TricksOfTheTrade_Phase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Riki_TricksOfTheTrade_Phase) == 0x1840);
    };
};
