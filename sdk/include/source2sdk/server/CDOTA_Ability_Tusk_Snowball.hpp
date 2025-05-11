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
        // Size: 0x6e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Tusk_Snowball : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad05b8[0x10]; // 0x5b8
            float snowball_windup_radius; // 0x5c8            
            float snowball_radius; // 0x5cc            
            float snowball_grow_rate; // 0x5d0            
            std::int32_t snowball_damage; // 0x5d4            
            std::int32_t snowball_damage_bonus; // 0x5d8            
            float stun_duration; // 0x5dc            
            float stun_duration_bonus; // 0x5e0            
            std::int32_t bonus_damage; // 0x5e4            
            float bonus_stun; // 0x5e8            
            std::int32_t snowball_speed; // 0x5ec            
            std::int32_t snowball_speed_bonus; // 0x5f0            
            float snowball_duration; // 0x5f4            
            Vector m_vProjectileLocation; // 0x5f8            
            uint8_t _pad0604[0x4]; // 0x604
            // m_hSnowballedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hSnowballedUnits;
            char m_hSnowballedUnits[0x18]; // 0x608            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x620            
            uint8_t _pad0624[0x4]; // 0x624
            source2sdk::server::CountdownTimer ctSnowball; // 0x628            
            bool m_bSpeakAlly; // 0x640            
            bool m_bIsExpired; // 0x641            
            bool m_bInWindup; // 0x642            
            uint8_t _pad0643[0x1]; // 0x643
            // m_hPrimaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPrimaryTarget;
            char m_hPrimaryTarget[0x4]; // 0x644            
            std::int32_t m_nContainedValidUnits; // 0x648            
            bool m_bEndingSnowball; // 0x64c            
            uint8_t _pad064d[0x9b];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Tusk_Snowball because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Tusk_Snowball) == 0x6e8);
    };
};
