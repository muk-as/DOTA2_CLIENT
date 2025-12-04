#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
        class C_OP_DistanceCull : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "control point"
            std::int32_t m_nControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "control point offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecPointOffset; // 0x_            
            // metadata: MPropertyFriendlyName "cull distance"
            float m_flDistance; // 0x_            
            // metadata: MPropertyFriendlyName "cull inside instead of outside"
            bool m_bCullInside; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Attribute to Test"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttribute; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DistanceCull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DistanceCull) == 0x_);
    };
};
