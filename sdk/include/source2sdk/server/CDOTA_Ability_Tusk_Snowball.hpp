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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Tusk_Snowball : public source2sdk::server::CDOTABaseAbility
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float snowball_windup_radius; // 0x_            
            float snowball_radius; // 0x_            
            float snowball_grow_rate; // 0x_            
            std::int32_t snowball_damage; // 0x_            
            std::int32_t snowball_damage_bonus; // 0x_            
            float stun_duration; // 0x_            
            float stun_duration_bonus; // 0x_            
            std::int32_t bonus_damage; // 0x_            
            float bonus_stun; // 0x_            
            std::int32_t snowball_speed; // 0x_            
            std::int32_t snowball_speed_bonus; // 0x_            
            float snowball_duration; // 0x_            
            Vector m_vProjectileLocation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hSnowballedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hSnowballedUnits;
            char m_hSnowballedUnits[0x_]; // 0x_            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer ctSnowball; // 0x_            
            bool m_bSpeakAlly; // 0x_            
            bool m_bIsExpired; // 0x_            
            bool m_bInWindup; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hPrimaryTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPrimaryTarget;
            char m_hPrimaryTarget[0x_]; // 0x_            
            std::int32_t m_nContainedValidUnits; // 0x_            
            bool m_bEndingSnowball; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Tusk_Snowball because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Tusk_Snowball) == 0x_);
    };
};
