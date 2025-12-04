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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetControlPointToWaterSurface : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "source CP"
            std::int32_t m_nSourceCP; // 0x_            
            // metadata: MPropertyFriendlyName "CP to set to surface"
            std::int32_t m_nDestCP; // 0x_            
            // metadata: MPropertyFriendlyName "CP to set to surface current flow velocity"
            // metadata: MPropertySuppressExpr "mod != hlx"
            std::int32_t m_nFlowCP; // 0x_            
            // metadata: MPropertyFriendlyName "CP to set component of if water"
            std::int32_t m_nActiveCP; // 0x_            
            // metadata: MPropertyFriendlyName "CP component"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nActiveCPField; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "retest rate"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRetestRate; // 0x_            
            // metadata: MPropertyFriendlyName "adaptive retest on moving surface"
            bool m_bAdaptiveThreshold; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointToWaterSurface because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointToWaterSurface) == 0x_);
    };
};
