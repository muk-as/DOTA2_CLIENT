#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/C_OP_RemapDistanceToLineSegmentBase.hpp"
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
        class C_OP_RemapDistanceToLineSegmentToScalar : public source2sdk::particles::C_OP_RemapDistanceToLineSegmentBase
        {
        public:
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x_            
            // metadata: MPropertyFriendlyName "output value at min distance"
            float m_flMinOutputValue; // 0x_            
            // metadata: MPropertyFriendlyName "output value at max distance"
            float m_flMaxOutputValue; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapDistanceToLineSegmentToScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapDistanceToLineSegmentToScalar) == 0x_);
    };
};
