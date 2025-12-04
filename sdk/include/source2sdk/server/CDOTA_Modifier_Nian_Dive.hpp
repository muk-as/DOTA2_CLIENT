#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTimeInAir; // 0x_            
            float m_flInitialVelocity; // 0x_            
            Vector m_vStartPosition; // 0x_            
            Vector m_vTargetHorizontalDirection; // 0x_            
            Vector m_vTargetPosition; // 0x_            
            float m_flCurrentTimeHoriz; // 0x_            
            float m_flCurrentTimeVert; // 0x_            
            bool m_bInterrupted; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flHorizDelayTime; // 0x_            
            float m_flVertDelayTime; // 0x_            
            float m_flLeapSequenceDuration; // 0x_            
            float m_flClawDamageTime; // 0x_            
            float m_flPlaybackRate; // 0x_            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            bool m_bPlayedSwipeSound; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t pounce_distance; // 0x_            
            float pounce_speed; // 0x_            
            float pounce_acceleration; // 0x_            
            std::int32_t pounce_radius; // 0x_            
            std::int32_t pounce_damage; // 0x_            
            std::int32_t stun_radius; // 0x_            
            float stun_duration; // 0x_            
            float leash_duration; // 0x_            
            float initial_delay; // 0x_            
            float landing_delay; // 0x_            
            float vertical_adjust; // 0x_            
            float vertical_adjust_max_distance; // 0x_            
            float vertical_adjust_min_distance; // 0x_            
            std::int32_t claw_damage; // 0x_            
            std::int32_t claw_damage_radius; // 0x_            
            float claw_damage_delay; // 0x_            
            float claw_damage_duration; // 0x_            
            // m_vHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitEntities;
            char m_vHitEntities[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Dive) == 0x_);
    };
};
