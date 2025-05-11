#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x638
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Tusk_Snowball : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            float snowball_windup_radius; // 0x5b0            
            float snowball_radius; // 0x5b4            
            float snowball_grow_rate; // 0x5b8            
            std::int32_t snowball_damage; // 0x5bc            
            std::int32_t snowball_damage_bonus; // 0x5c0            
            float stun_duration; // 0x5c4            
            float stun_duration_bonus; // 0x5c8            
            std::int32_t bonus_damage; // 0x5cc            
            float bonus_stun; // 0x5d0            
            std::int32_t snowball_speed; // 0x5d4            
            std::int32_t snowball_speed_bonus; // 0x5d8            
            float snowball_duration; // 0x5dc            
            Vector m_vProjectileLocation; // 0x5e0            
            uint8_t _pad05ec[0x4]; // 0x5ec
            // m_hSnowballedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hSnowballedUnits;
            char m_hSnowballedUnits[0x18]; // 0x5f0            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x608            
            uint8_t _pad060c[0x4]; // 0x60c
            source2sdk::client::CountdownTimer ctSnowball; // 0x610            
            bool m_bSpeakAlly; // 0x628            
            bool m_bIsExpired; // 0x629            
            bool m_bInWindup; // 0x62a            
            uint8_t _pad062b[0x1]; // 0x62b
            // m_hPrimaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hPrimaryTarget;
            char m_hPrimaryTarget[0x4]; // 0x62c            
            std::int32_t m_nContainedValidUnits; // 0x630            
            bool m_bEndingSnowball; // 0x634            
            uint8_t _pad0635[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Tusk_Snowball because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Tusk_Snowball) == 0x638);
    };
};
