#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
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
        class C_OP_SetControlPointToCPVelocity : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "control point input"
            std::int32_t m_nCPInput; // 0x_            
            // metadata: MPropertyFriendlyName "control point number to set velocity"
            std::int32_t m_nCPOutputVel; // 0x_            
            // metadata: MPropertyFriendlyName "normalize output"
            bool m_bNormalize; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "control point number to set magnitude"
            std::int32_t m_nCPOutputMag; // 0x_            
            // metadata: MPropertyFriendlyName "control point field for magnitude"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nCPField; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "comparison velocity"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecComparisonVelocity; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointToCPVelocity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointToCPVelocity) == 0x_);
    };
};
