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
    // Size: 0x8f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_LocalTempEntity : public client::CBaseAnimatingActivity
    {
    public:
        int32_t flags; // 0x848        
        entity2::GameTime_t die; // 0x84c        
        float m_flFrameMax; // 0x850        
        float x; // 0x854        
        float y; // 0x858        
        float fadeSpeed; // 0x85c        
        float bounceFactor; // 0x860        
        int32_t hitSound; // 0x864        
        int32_t priority; // 0x868        
        Vector tentOffset; // 0x86c        
        QAngle m_vecTempEntAngVelocity; // 0x878        
        int32_t tempent_renderamt; // 0x884        
        Vector m_vecNormal; // 0x888        
        float m_flSpriteScale; // 0x894        
        int32_t m_nFlickerFrame; // 0x898        
        float m_flFrameRate; // 0x89c        
        float m_flFrame; // 0x8a0        
        [[maybe_unused]] std::uint8_t pad_0x8a4[0x4]; // 0x8a4
        char* m_pszImpactEffect; // 0x8a8        
        char* m_pszParticleEffect; // 0x8b0        
        bool m_bParticleCollision; // 0x8b8        
        [[maybe_unused]] std::uint8_t pad_0x8b9[0x3]; // 0x8b9
        int32_t m_iLastCollisionFrame; // 0x8bc        
        Vector m_vLastCollisionOrigin; // 0x8c0        
        Vector m_vecTempEntVelocity; // 0x8cc        
        Vector m_vecPrevAbsOrigin; // 0x8d8        
        Vector m_vecTempEntAcceleration; // 0x8e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
    static_assert(sizeof(C_LocalTempEntity) == 0x8f0);
};
