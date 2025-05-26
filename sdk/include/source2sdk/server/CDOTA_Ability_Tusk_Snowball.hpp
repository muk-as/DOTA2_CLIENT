#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x6f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Tusk_Snowball : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05c0[0x10]; // 0x5c0
            float snowball_windup_radius; // 0x5d0            
            float snowball_radius; // 0x5d4            
            float snowball_grow_rate; // 0x5d8            
            std::int32_t snowball_damage; // 0x5dc            
            std::int32_t snowball_damage_bonus; // 0x5e0            
            float stun_duration; // 0x5e4            
            float stun_duration_bonus; // 0x5e8            
            std::int32_t bonus_damage; // 0x5ec            
            float bonus_stun; // 0x5f0            
            std::int32_t snowball_speed; // 0x5f4            
            std::int32_t snowball_speed_bonus; // 0x5f8            
            float snowball_duration; // 0x5fc            
            Vector m_vProjectileLocation; // 0x600            
            uint8_t _pad060c[0x4]; // 0x60c
            // m_hSnowballedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hSnowballedUnits;
            char m_hSnowballedUnits[0x18]; // 0x610            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x628            
            uint8_t _pad062c[0x4]; // 0x62c
            source2sdk::server::CountdownTimer ctSnowball; // 0x630            
            bool m_bSpeakAlly; // 0x648            
            bool m_bIsExpired; // 0x649            
            bool m_bInWindup; // 0x64a            
            uint8_t _pad064b[0x1]; // 0x64b
            // m_hPrimaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPrimaryTarget;
            char m_hPrimaryTarget[0x4]; // 0x64c            
            std::int32_t m_nContainedValidUnits; // 0x650            
            bool m_bEndingSnowball; // 0x654            
            uint8_t _pad0655[0x9b];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Tusk_Snowball because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Tusk_Snowball) == 0x6f0);
    };
};
