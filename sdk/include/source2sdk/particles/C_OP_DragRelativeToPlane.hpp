#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb08
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_DragRelativeToPlane : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "dampening"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flDragAtPlane; // 0x1c0            
            // metadata: MPropertyFriendlyName "falloff"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flFalloff; // 0x320            
            // metadata: MPropertyFriendlyName "dampen on only one side of plane"
            bool m_bDirectional; // 0x480            
            uint8_t _pad0481[0x7]; // 0x481
            // metadata: MPropertyFriendlyName "plane normal"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_vecPlaneNormal; // 0x488            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0xb00            
            uint8_t _pad0b04[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DragRelativeToPlane because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DragRelativeToPlane) == 0xb08);
    };
};
