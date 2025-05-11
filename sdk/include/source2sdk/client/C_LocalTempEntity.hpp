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
        // Size: 0x8a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_LocalTempEntity : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            std::int32_t flags; // 0x7f8            
            source2sdk::entity2::GameTime_t die; // 0x7fc            
            float m_flFrameMax; // 0x800            
            float x; // 0x804            
            float y; // 0x808            
            float fadeSpeed; // 0x80c            
            float bounceFactor; // 0x810            
            std::int32_t hitSound; // 0x814            
            std::int32_t priority; // 0x818            
            Vector tentOffset; // 0x81c            
            QAngle m_vecTempEntAngVelocity; // 0x828            
            std::int32_t tempent_renderamt; // 0x834            
            Vector m_vecNormal; // 0x838            
            float m_flSpriteScale; // 0x844            
            std::int32_t m_nFlickerFrame; // 0x848            
            float m_flFrameRate; // 0x84c            
            float m_flFrame; // 0x850            
            uint8_t _pad0854[0x4]; // 0x854
            char* m_pszImpactEffect; // 0x858            
            char* m_pszParticleEffect; // 0x860            
            bool m_bParticleCollision; // 0x868            
            uint8_t _pad0869[0x3]; // 0x869
            std::int32_t m_iLastCollisionFrame; // 0x86c            
            Vector m_vLastCollisionOrigin; // 0x870            
            Vector m_vecTempEntVelocity; // 0x87c            
            Vector m_vecPrevAbsOrigin; // 0x888            
            Vector m_vecTempEntAcceleration; // 0x894            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_LocalTempEntity) == 0x8a0);
    };
};
