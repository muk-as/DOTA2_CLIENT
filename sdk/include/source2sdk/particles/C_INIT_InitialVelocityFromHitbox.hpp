#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x258
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_InitialVelocityFromHitbox : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "velocity minimum"
            float m_flVelocityMin; // 0x1c8            
            // metadata: MPropertyFriendlyName "velocity maximum"
            float m_flVelocityMax; // 0x1cc            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1d0            
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x1d4            
            // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
            bool m_bUseBones; // 0x254            
            uint8_t _pad0255[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_InitialVelocityFromHitbox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_InitialVelocityFromHitbox) == 0x258);
    };
};
