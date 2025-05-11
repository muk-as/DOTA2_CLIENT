#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        // Size: 0x4a8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_PlanarConstraint : public source2sdk::particles::CParticleFunctionConstraint
        {
        public:
            // metadata: MPropertyFriendlyName "plane point"
            // metadata: MVectorIsCoordinate
            Vector m_PointOnPlane; // 0x1c0            
            // metadata: MPropertyFriendlyName "plane normal"
            Vector m_PlaneNormal; // 0x1cc            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1d8            
            // metadata: MPropertyFriendlyName "global origin"
            bool m_bGlobalOrigin; // 0x1dc            
            // metadata: MPropertyFriendlyName "global normal"
            bool m_bGlobalNormal; // 0x1dd            
            uint8_t _pad01de[0x2]; // 0x1de
            // metadata: MPropertyFriendlyName "radius scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flRadiusScale; // 0x1e0            
            // metadata: MPropertyFriendlyName "falloff distance from control point"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x340            
            // metadata: MPropertyFriendlyName "use old code"
            bool m_bUseOldCode; // 0x4a0            
            uint8_t _pad04a1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_PlanarConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_PlanarConstraint) == 0x4a8);
    };
};
