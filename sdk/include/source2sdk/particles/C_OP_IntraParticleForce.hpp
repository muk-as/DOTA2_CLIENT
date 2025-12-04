#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionForce.hpp"

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
        class C_OP_IntraParticleForce : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "min attraction distance"
            float m_flAttractionMinDistance; // 0x_            
            // metadata: MPropertyFriendlyName "max attraction distance"
            float m_flAttractionMaxDistance; // 0x_            
            // metadata: MPropertyFriendlyName "max attraction force"
            float m_flAttractionMaxStrength; // 0x_            
            // metadata: MPropertyFriendlyName "min repulsion distance"
            float m_flRepulsionMinDistance; // 0x_            
            // metadata: MPropertyFriendlyName "max repulsion distance"
            float m_flRepulsionMaxDistance; // 0x_            
            // metadata: MPropertyFriendlyName "max repulsion force"
            float m_flRepulsionMaxStrength; // 0x_            
            // metadata: MPropertyFriendlyName "use aabbtree"
            bool m_bUseAABB; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_IntraParticleForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_IntraParticleForce) == 0x_);
    };
};
