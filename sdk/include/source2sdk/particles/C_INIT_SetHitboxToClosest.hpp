#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ClosestPointTestType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_SetHitboxToClosest : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "desired hitbox"
            std::int32_t m_nDesiredHitbox; // 0x_            
            // metadata: MPropertyFriendlyName "model hitbox scale"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecHitBoxScale; // 0x_            
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x_            
            // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
            bool m_bUseBones; // 0x_            
            // metadata: MPropertyFriendlyName "get closest point on closest hitbox"
            bool m_bUseClosestPointOnHitbox; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "closest point test type"
            source2sdk::particles::ClosestPointTestType_t m_nTestType; // 0x_            
            // metadata: MPropertyFriendlyName "hybrid ratio"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flHybridRatio; // 0x_            
            // metadata: MPropertyFriendlyName "set initial position"
            bool m_bUpdatePosition; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_SetHitboxToClosest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_SetHitboxToClosest) == 0x_);
    };
};
