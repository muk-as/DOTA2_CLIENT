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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x850
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapExternalWindToCP : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "control point to sample wind"
            std::int32_t m_nCP; // 0x1c8            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nCPOutput; // 0x1cc            
            // metadata: MPropertyFriendlyName "wind scale"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecScale; // 0x1d0            
            // metadata: MPropertyFriendlyName "set magnitude instead of vector"
            bool m_bSetMagnitude; // 0x848            
            uint8_t _pad0849[0x3]; // 0x849
            // metadata: MPropertyFriendlyName "magnitude output component"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            // metadata: MPropertySuppressExpr "!m_bSetMagnitude"
            std::int32_t m_nOutVectorField; // 0x84c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapExternalWindToCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapExternalWindToCP) == 0x850);
    };
};
