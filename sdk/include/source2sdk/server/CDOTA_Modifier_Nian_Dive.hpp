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
        // Size: 0x1928
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTimeInAir; // 0x1878            
            float m_flInitialVelocity; // 0x187c            
            Vector m_vStartPosition; // 0x1880            
            Vector m_vTargetHorizontalDirection; // 0x188c            
            Vector m_vTargetPosition; // 0x1898            
            float m_flCurrentTimeHoriz; // 0x18a4            
            float m_flCurrentTimeVert; // 0x18a8            
            bool m_bInterrupted; // 0x18ac            
            uint8_t _pad18ad[0x3]; // 0x18ad
            float m_flHorizDelayTime; // 0x18b0            
            float m_flVertDelayTime; // 0x18b4            
            float m_flLeapSequenceDuration; // 0x18b8            
            float m_flClawDamageTime; // 0x18bc            
            float m_flPlaybackRate; // 0x18c0            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x18c4            
            bool m_bPlayedSwipeSound; // 0x18c8            
            uint8_t _pad18c9[0x3]; // 0x18c9
            std::int32_t pounce_distance; // 0x18cc            
            float pounce_speed; // 0x18d0            
            float pounce_acceleration; // 0x18d4            
            std::int32_t pounce_radius; // 0x18d8            
            std::int32_t pounce_damage; // 0x18dc            
            std::int32_t stun_radius; // 0x18e0            
            float stun_duration; // 0x18e4            
            float leash_duration; // 0x18e8            
            float initial_delay; // 0x18ec            
            float landing_delay; // 0x18f0            
            float vertical_adjust; // 0x18f4            
            float vertical_adjust_max_distance; // 0x18f8            
            float vertical_adjust_min_distance; // 0x18fc            
            std::int32_t claw_damage; // 0x1900            
            std::int32_t claw_damage_radius; // 0x1904            
            float claw_damage_delay; // 0x1908            
            float claw_damage_duration; // 0x190c            
            // m_vHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitEntities;
            char m_vHitEntities[0x18]; // 0x1910            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Dive) == 0x1928);
    };
};
