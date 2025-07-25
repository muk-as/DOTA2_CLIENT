#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/GameActivity_t.hpp"
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
        // Size: 0x1900
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_GrapplingClaw_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vGrappleHookPos; // 0x1878            
            Vector m_vInitialDir; // 0x1884            
            Vector m_vHookDir; // 0x1890            
            Vector m_vLastVelocity; // 0x189c            
            float m_flHookDistance; // 0x18a8            
            float m_flCurrentHookRetractSpeed; // 0x18ac            
            float m_flCurrentHookLength; // 0x18b0            
            float m_flCurHookDistDelta; // 0x18b4            
            float m_flCurMomentumDistDelta; // 0x18b8            
            float m_flDecelerationRate; // 0x18bc            
            float m_flMaxHeight; // 0x18c0            
            float m_flInitialSpeed; // 0x18c4            
            float m_flDT; // 0x18c8            
            float m_flAccumDist; // 0x18cc            
            bool m_bHookAttached; // 0x18d0            
            uint8_t _pad18d1[0x3]; // 0x18d1
            std::int32_t grapple_speed; // 0x18d4            
            std::int32_t impact_damage; // 0x18d8            
            std::int32_t land_distance; // 0x18dc            
            std::int32_t bonus_flat_lifesteal; // 0x18e0            
            std::int32_t lifesteal_pct; // 0x18e4            
            std::int32_t creep_lifesteal_reduction_pct; // 0x18e8            
            std::int32_t max_distance_break; // 0x18ec            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x18f0            
            bool m_bDidAttack; // 0x18f4            
            bool m_bStartedAnimation; // 0x18f5            
            uint8_t _pad18f6[0x2]; // 0x18f6
            source2sdk::client::GameActivity_t m_Activity; // 0x18f8            
            float m_flTimeLeftForActivity; // 0x18fc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_GrapplingClaw_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kez_GrapplingClaw_Movement) == 0x1900);
    };
};
