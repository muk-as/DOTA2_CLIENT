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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Grimstroke_InkCreature : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1888            
            source2sdk::client::ParticleIndex_t m_nAmbientFXIndex; // 0x188c            
            std::int32_t m_nAttackCount; // 0x1890            
            bool m_bIsLatched; // 0x1894            
            uint8_t _pad1895[0x3]; // 0x1895
            // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAttachTarget;
            char m_hAttachTarget[0x4]; // 0x1898            
            uint8_t _pad189c[0x4]; // 0x189c
            source2sdk::server::CountdownTimer m_EnemyVision; // 0x18a0            
            float latch_duration; // 0x18b8            
            float speed; // 0x18bc            
            std::int32_t destroy_attacks; // 0x18c0            
            std::int32_t hero_attack_multiplier; // 0x18c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_InkCreature because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Grimstroke_InkCreature) == 0x18c8);
    };
};
