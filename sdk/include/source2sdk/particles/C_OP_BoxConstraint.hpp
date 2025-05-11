#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
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
        // Size: 0xeb8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_BoxConstraint : public source2sdk::particles::CParticleFunctionConstraint
        {
        public:
            // metadata: MPropertyFriendlyName "min coords"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecMin; // 0x1c0            
            // metadata: MPropertyFriendlyName "max coords"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecMax; // 0x838            
            // metadata: MPropertyFriendlyName "control point"
            std::int32_t m_nCP; // 0xeb0            
            // metadata: MPropertyFriendlyName "use local space"
            bool m_bLocalSpace; // 0xeb4            
            // metadata: MPropertyFriendlyName "Take radius into account"
            bool m_bAccountForRadius; // 0xeb5            
            uint8_t _pad0eb6[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_BoxConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_BoxConstraint) == 0xeb8);
    };
};
