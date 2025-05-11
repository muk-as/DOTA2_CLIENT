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
        // Size: 0x18a8
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Nian_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flTotalTimeInAir; // 0x17f8            
            float m_flInitialVelocity; // 0x17fc            
            Vector m_vStartPosition; // 0x1800            
            Vector m_vTargetHorizontalDirection; // 0x180c            
            Vector m_vTargetPosition; // 0x1818            
            float m_flCurrentTimeHoriz; // 0x1824            
            float m_flCurrentTimeVert; // 0x1828            
            bool m_bInterrupted; // 0x182c            
            uint8_t _pad182d[0x3]; // 0x182d
            float m_flHorizDelayTime; // 0x1830            
            float m_flVertDelayTime; // 0x1834            
            float m_flLeapSequenceDuration; // 0x1838            
            float m_flClawDamageTime; // 0x183c            
            float m_flPlaybackRate; // 0x1840            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1844            
            bool m_bPlayedSwipeSound; // 0x1848            
            uint8_t _pad1849[0x3]; // 0x1849
            std::int32_t pounce_distance; // 0x184c            
            float pounce_speed; // 0x1850            
            float pounce_acceleration; // 0x1854            
            std::int32_t pounce_radius; // 0x1858            
            std::int32_t pounce_damage; // 0x185c            
            std::int32_t stun_radius; // 0x1860            
            float stun_duration; // 0x1864            
            float leash_duration; // 0x1868            
            float initial_delay; // 0x186c            
            float landing_delay; // 0x1870            
            float vertical_adjust; // 0x1874            
            float vertical_adjust_max_distance; // 0x1878            
            float vertical_adjust_min_distance; // 0x187c            
            std::int32_t claw_damage; // 0x1880            
            std::int32_t claw_damage_radius; // 0x1884            
            float claw_damage_delay; // 0x1888            
            float claw_damage_duration; // 0x188c            
            // m_vHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitEntities;
            char m_vHitEntities[0x18]; // 0x1890            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Nian_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Nian_Dive) == 0x18a8);
    };
};
