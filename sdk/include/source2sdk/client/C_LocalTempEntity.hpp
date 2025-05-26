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
        // Size: 0xa40
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_LocalTempEntity : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            std::int32_t flags; // 0x998            
            source2sdk::entity2::GameTime_t die; // 0x99c            
            float m_flFrameMax; // 0x9a0            
            float x; // 0x9a4            
            float y; // 0x9a8            
            float fadeSpeed; // 0x9ac            
            float bounceFactor; // 0x9b0            
            std::int32_t hitSound; // 0x9b4            
            std::int32_t priority; // 0x9b8            
            Vector tentOffset; // 0x9bc            
            QAngle m_vecTempEntAngVelocity; // 0x9c8            
            std::int32_t tempent_renderamt; // 0x9d4            
            Vector m_vecNormal; // 0x9d8            
            float m_flSpriteScale; // 0x9e4            
            std::int32_t m_nFlickerFrame; // 0x9e8            
            float m_flFrameRate; // 0x9ec            
            float m_flFrame; // 0x9f0            
            uint8_t _pad09f4[0x4]; // 0x9f4
            char* m_pszImpactEffect; // 0x9f8            
            char* m_pszParticleEffect; // 0xa00            
            bool m_bParticleCollision; // 0xa08            
            uint8_t _pad0a09[0x3]; // 0xa09
            std::int32_t m_iLastCollisionFrame; // 0xa0c            
            Vector m_vLastCollisionOrigin; // 0xa10            
            Vector m_vecTempEntVelocity; // 0xa1c            
            Vector m_vecPrevAbsOrigin; // 0xa28            
            Vector m_vecTempEntAcceleration; // 0xa34            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_LocalTempEntity) == 0xa40);
    };
};
