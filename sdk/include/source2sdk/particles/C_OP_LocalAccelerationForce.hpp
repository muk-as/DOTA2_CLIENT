#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionForce.hpp"
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
        // Size: 0x850
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_LocalAccelerationForce : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "local space control point"
            std::int32_t m_nCP; // 0x1d0            
            // metadata: MPropertyFriendlyName "scale control point"
            std::int32_t m_nScaleCP; // 0x1d4            
            // metadata: MPropertyFriendlyName "local space acceleration"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecAccel; // 0x1d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_LocalAccelerationForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_LocalAccelerationForce) == 0x850);
    };
};
