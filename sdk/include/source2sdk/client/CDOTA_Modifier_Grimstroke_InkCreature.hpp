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
        class CDOTA_Modifier_Grimstroke_InkCreature : public source2sdk::client::CDOTA_Buff
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1878            
            source2sdk::client::ParticleIndex_t m_nAmbientFXIndex; // 0x187c            
            std::int32_t m_nAttackCount; // 0x1880            
            bool m_bIsLatched; // 0x1884            
            uint8_t _pad1885[0x3]; // 0x1885
            // m_hAttachTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hAttachTarget;
            char m_hAttachTarget[0x4]; // 0x1888            
            uint8_t _pad188c[0x4]; // 0x188c
            source2sdk::client::CountdownTimer m_EnemyVision; // 0x1890            
            float latch_duration; // 0x18a8            
            float speed; // 0x18ac            
            std::int32_t destroy_attacks; // 0x18b0            
            std::int32_t hero_attack_multiplier; // 0x18b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Grimstroke_InkCreature because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Grimstroke_InkCreature) == 0x18b8);
    };
};
