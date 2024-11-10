#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/GameActivity_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1790
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Kez_GrapplingClaw_Movement : public client::CDOTA_Buff
    {
    public:
        Vector m_vGrappleHookPos; // 0x1708        
        Vector m_vInitialDir; // 0x1714        
        Vector m_vHookDir; // 0x1720        
        Vector m_vLastVelocity; // 0x172c        
        float m_flHookDistance; // 0x1738        
        float m_flCurrentHookRetractSpeed; // 0x173c        
        float m_flCurrentHookLength; // 0x1740        
        float m_flCurHookDistDelta; // 0x1744        
        float m_flCurMomentumDistDelta; // 0x1748        
        float m_flDecelerationRate; // 0x174c        
        float m_flMaxHeight; // 0x1750        
        float m_flInitialSpeed; // 0x1754        
        float m_flDT; // 0x1758        
        float m_flAccumDist; // 0x175c        
        bool m_bHookAttached; // 0x1760        
        [[maybe_unused]] std::uint8_t pad_0x1761[0x3]; // 0x1761
        int32_t grapple_speed; // 0x1764        
        int32_t impact_damage; // 0x1768        
        int32_t land_distance; // 0x176c        
        int32_t bonus_flat_lifesteal; // 0x1770        
        int32_t lifesteal_pct; // 0x1774        
        int32_t creep_lifesteal_reduction_pct; // 0x1778        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x177c        
        bool m_bDidAttack; // 0x1780        
        bool m_bStartedAnimation; // 0x1781        
        [[maybe_unused]] std::uint8_t pad_0x1782[0x2]; // 0x1782
        client::GameActivity_t m_Activity; // 0x1784        
        float m_flTimeLeftForActivity; // 0x1788        
        [[maybe_unused]] std::uint8_t pad_0x178c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Kez_GrapplingClaw_Movement because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Kez_GrapplingClaw_Movement) == 0x1790);
};
