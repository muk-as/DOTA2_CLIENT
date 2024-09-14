#pragma once
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_LocalTempEntity : public client::CBaseAnimatingActivity
    {
    public:
        int32_t flags; // 0x800        
        entity2::GameTime_t die; // 0x804        
        float m_flFrameMax; // 0x808        
        float x; // 0x80c        
        float y; // 0x810        
        float fadeSpeed; // 0x814        
        float bounceFactor; // 0x818        
        int32_t hitSound; // 0x81c        
        int32_t priority; // 0x820        
        Vector tentOffset; // 0x824        
        QAngle m_vecTempEntAngVelocity; // 0x830        
        int32_t tempent_renderamt; // 0x83c        
        Vector m_vecNormal; // 0x840        
        float m_flSpriteScale; // 0x84c        
        int32_t m_nFlickerFrame; // 0x850        
        float m_flFrameRate; // 0x854        
        float m_flFrame; // 0x858        
        [[maybe_unused]] std::uint8_t pad_0x85c[0x4]; // 0x85c
        char* m_pszImpactEffect; // 0x860        
        char* m_pszParticleEffect; // 0x868        
        bool m_bParticleCollision; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x871[0x3]; // 0x871
        int32_t m_iLastCollisionFrame; // 0x874        
        Vector m_vLastCollisionOrigin; // 0x878        
        Vector m_vecTempEntVelocity; // 0x884        
        Vector m_vecPrevAbsOrigin; // 0x890        
        Vector m_vecTempEntAcceleration; // 0x89c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
    static_assert(sizeof(C_LocalTempEntity) == 0x8a8);
};
