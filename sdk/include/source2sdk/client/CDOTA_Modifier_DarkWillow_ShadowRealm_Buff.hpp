#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x18c8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_DarkWillow_ShadowRealm_Buff : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t damage; // 0x1888            
            float max_damage_duration; // 0x188c            
            std::int32_t attack_range_bonus; // 0x1890            
            uint8_t _pad1894[0x4]; // 0x1894
            // m_InFlightAttackRecords has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_InFlightAttackRecords;
            char m_InFlightAttackRecords[0x18]; // 0x1898            
            bool bAttackRange; // 0x18b0            
            uint8_t _pad18b1[0x3]; // 0x18b1
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x18b4            
            source2sdk::entity2::GameTime_t m_flFadeTime; // 0x18b8            
            float m_flDamageScale; // 0x18bc            
            float duration; // 0x18c0            
            float aura_radius; // 0x18c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_DarkWillow_ShadowRealm_Buff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_DarkWillow_ShadowRealm_Buff) == 0x18c8);
    };
};
