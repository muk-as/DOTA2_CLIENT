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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_LocalTempEntity : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            std::int32_t flags; // 0x_            
            source2sdk::entity2::GameTime_t die; // 0x_            
            float m_flFrameMax; // 0x_            
            float x; // 0x_            
            float y; // 0x_            
            float fadeSpeed; // 0x_            
            float bounceFactor; // 0x_            
            std::int32_t hitSound; // 0x_            
            std::int32_t priority; // 0x_            
            Vector tentOffset; // 0x_            
            QAngle m_vecTempEntAngVelocity; // 0x_            
            std::int32_t tempent_renderamt; // 0x_            
            Vector m_vecNormal; // 0x_            
            float m_flSpriteScale; // 0x_            
            std::int32_t m_nFlickerFrame; // 0x_            
            float m_flFrameRate; // 0x_            
            float m_flFrame; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            char* m_pszImpactEffect; // 0x_            
            char* m_pszParticleEffect; // 0x_            
            bool m_bParticleCollision; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iLastCollisionFrame; // 0x_            
            Vector m_vLastCollisionOrigin; // 0x_            
            Vector m_vecTempEntVelocity; // 0x_            
            Vector m_vecPrevAbsOrigin; // 0x_            
            Vector m_vecTempEntAcceleration; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_LocalTempEntity) == 0x_);
    };
};
