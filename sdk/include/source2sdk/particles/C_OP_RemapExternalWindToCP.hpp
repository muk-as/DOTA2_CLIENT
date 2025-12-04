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
        class C_OP_RemapExternalWindToCP : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "control point to sample wind"
            std::int32_t m_nCP; // 0x_            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nCPOutput; // 0x_            
            // metadata: MPropertyFriendlyName "wind scale"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecScale; // 0x_            
            // metadata: MPropertyFriendlyName "set magnitude instead of vector"
            bool m_bSetMagnitude; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "magnitude output component"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            // metadata: MPropertySuppressExpr "!m_bSetMagnitude"
            std::int32_t m_nOutVectorField; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapExternalWindToCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapExternalWindToCP) == 0x_);
    };
};
