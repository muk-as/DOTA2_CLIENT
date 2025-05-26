#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
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
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x18b8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Riki_TricksOfTheTrade_Phase : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFxIndex; // 0x1878            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x187c            
            source2sdk::client::CountdownTimer m_Timer; // 0x1880            
            // m_hPreviousTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPreviousTarget;
            char m_hPreviousTarget[0x4]; // 0x1898            
            std::int32_t m_nSucceessiveHits; // 0x189c            
            std::int32_t damage_pct; // 0x18a0            
            std::int32_t agility_pct; // 0x18a4            
            float creep_agility_multiplier; // 0x18a8            
            float m_flMultiplier; // 0x18ac            
            float cooldown_reduction_per_creep_kill; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Riki_TricksOfTheTrade_Phase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Riki_TricksOfTheTrade_Phase) == 0x18b8);
    };
};
