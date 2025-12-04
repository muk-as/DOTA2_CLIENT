#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/GameActivity_t.hpp"
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
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_GrapplingClaw_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vGrappleHookPos; // 0x_            
            Vector m_vInitialDir; // 0x_            
            Vector m_vHookDir; // 0x_            
            Vector m_vLastVelocity; // 0x_            
            float m_flHookDistance; // 0x_            
            float m_flCurrentHookRetractSpeed; // 0x_            
            float m_flCurrentHookLength; // 0x_            
            float m_flCurHookDistDelta; // 0x_            
            float m_flCurMomentumDistDelta; // 0x_            
            float m_flDecelerationRate; // 0x_            
            float m_flMaxHeight; // 0x_            
            float m_flInitialSpeed; // 0x_            
            float m_flDT; // 0x_            
            float m_flAccumDist; // 0x_            
            bool m_bHookAttached; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t grapple_speed; // 0x_            
            std::int32_t impact_damage; // 0x_            
            std::int32_t land_distance; // 0x_            
            std::int32_t max_distance_break; // 0x_            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            bool m_bDidAttack; // 0x_            
            bool m_bStartedAnimation; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::GameActivity_t m_Activity; // 0x_            
            float m_flTimeLeftForActivity; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_GrapplingClaw_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Kez_GrapplingClaw_Movement) == 0x_);
    };
};
