#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa68
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_LocalTempEntity : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            std::int32_t flags; // 0x9c0            
            source2sdk::entity2::GameTime_t die; // 0x9c4            
            float m_flFrameMax; // 0x9c8            
            float x; // 0x9cc            
            float y; // 0x9d0            
            float fadeSpeed; // 0x9d4            
            float bounceFactor; // 0x9d8            
            std::int32_t hitSound; // 0x9dc            
            std::int32_t priority; // 0x9e0            
            Vector tentOffset; // 0x9e4            
            QAngle m_vecTempEntAngVelocity; // 0x9f0            
            std::int32_t tempent_renderamt; // 0x9fc            
            Vector m_vecNormal; // 0xa00            
            float m_flSpriteScale; // 0xa0c            
            std::int32_t m_nFlickerFrame; // 0xa10            
            float m_flFrameRate; // 0xa14            
            float m_flFrame; // 0xa18            
            uint8_t _pad0a1c[0x4]; // 0xa1c
            char* m_pszImpactEffect; // 0xa20            
            char* m_pszParticleEffect; // 0xa28            
            bool m_bParticleCollision; // 0xa30            
            uint8_t _pad0a31[0x3]; // 0xa31
            std::int32_t m_iLastCollisionFrame; // 0xa34            
            Vector m_vLastCollisionOrigin; // 0xa38            
            Vector m_vecTempEntVelocity; // 0xa44            
            Vector m_vecPrevAbsOrigin; // 0xa50            
            Vector m_vecTempEntAcceleration; // 0xa5c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_LocalTempEntity) == 0xa68);
    };
};
