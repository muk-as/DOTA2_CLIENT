#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

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
        // Size: 0x348
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetControlPointToWaterSurface : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "source CP"
            std::int32_t m_nSourceCP; // 0x1c8            
            // metadata: MPropertyFriendlyName "CP to set to surface"
            std::int32_t m_nDestCP; // 0x1cc            
            // metadata: MPropertyFriendlyName "CP to set to surface current flow velocity"
            // metadata: MPropertySuppressExpr "mod != hlx"
            std::int32_t m_nFlowCP; // 0x1d0            
            // metadata: MPropertyFriendlyName "CP to set component of if water"
            std::int32_t m_nActiveCP; // 0x1d4            
            // metadata: MPropertyFriendlyName "CP component"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nActiveCPField; // 0x1d8            
            uint8_t _pad01dc[0x4]; // 0x1dc
            // metadata: MPropertyFriendlyName "retest rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRetestRate; // 0x1e0            
            // metadata: MPropertyFriendlyName "adaptive retest on moving surface"
            bool m_bAdaptiveThreshold; // 0x340            
            uint8_t _pad0341[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointToWaterSurface because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointToWaterSurface) == 0x348);
    };
};
