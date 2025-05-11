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
        // Size: 0x1880
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Kez_GrapplingClaw_Movement : public source2sdk::client::CDOTA_Buff
        {
        public:
            Vector m_vGrappleHookPos; // 0x17f8            
            Vector m_vInitialDir; // 0x1804            
            Vector m_vHookDir; // 0x1810            
            Vector m_vLastVelocity; // 0x181c            
            float m_flHookDistance; // 0x1828            
            float m_flCurrentHookRetractSpeed; // 0x182c            
            float m_flCurrentHookLength; // 0x1830            
            float m_flCurHookDistDelta; // 0x1834            
            float m_flCurMomentumDistDelta; // 0x1838            
            float m_flDecelerationRate; // 0x183c            
            float m_flMaxHeight; // 0x1840            
            float m_flInitialSpeed; // 0x1844            
            float m_flDT; // 0x1848            
            float m_flAccumDist; // 0x184c            
            bool m_bHookAttached; // 0x1850            
            uint8_t _pad1851[0x3]; // 0x1851
            std::int32_t grapple_speed; // 0x1854            
            std::int32_t impact_damage; // 0x1858            
            std::int32_t land_distance; // 0x185c            
            std::int32_t bonus_flat_lifesteal; // 0x1860            
            std::int32_t lifesteal_pct; // 0x1864            
            std::int32_t creep_lifesteal_reduction_pct; // 0x1868            
            std::int32_t max_distance_break; // 0x186c            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x1870            
            bool m_bDidAttack; // 0x1874            
            bool m_bStartedAnimation; // 0x1875            
            uint8_t _pad1876[0x2]; // 0x1876
            source2sdk::client::GameActivity_t m_Activity; // 0x1878            
            float m_flTimeLeftForActivity; // 0x187c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Kez_GrapplingClaw_Movement because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Kez_GrapplingClaw_Movement) == 0x1880);
    };
};
