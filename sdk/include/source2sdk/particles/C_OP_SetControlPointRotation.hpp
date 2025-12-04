#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
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
        class C_OP_SetControlPointRotation : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "rotation axis"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_vecRotAxis; // 0x_            
            // metadata: MPropertyFriendlyName "rotation rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRotRate; // 0x_            
            // metadata: MPropertyFriendlyName "control point"
            std::int32_t m_nCP; // 0x_            
            // metadata: MPropertyFriendlyName "local space control point"
            std::int32_t m_nLocalCP; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointRotation because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointRotation) == 0x_);
    };
};
