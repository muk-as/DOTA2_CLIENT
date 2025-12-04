#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
#include "source2sdk/particles/CPathParameters.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"

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
        class C_OP_ConstrainDistanceToPath : public source2sdk::particles::CParticleFunctionConstraint
        {
        public:
            // metadata: MPropertyFriendlyName "minimum distance"
            float m_fMinDistance; // 0x_            
            // metadata: MPropertyFriendlyName "maximum distance"
            float m_flMaxDistance0; // 0x_            
            // metadata: MPropertyFriendlyName "maximum distance middle"
            float m_flMaxDistanceMid; // 0x_            
            // metadata: MPropertyFriendlyName "maximum distance end"
            float m_flMaxDistance1; // 0x_            
            source2sdk::particles::CPathParameters m_PathParameters; // 0x_            
            // metadata: MPropertyFriendlyName "travel time"
            float m_flTravelTime; // 0x_            
            // metadata: MPropertyFriendlyName "travel time scale field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldScale; // 0x_            
            // metadata: MPropertyFriendlyName "manual time placement field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nManualTField; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ConstrainDistanceToPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ConstrainDistanceToPath) == 0x_);
    };
};
