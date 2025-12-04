#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        class C_INIT_PositionWarpScalar : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "warp min"
            // metadata: MVectorIsCoordinate
            Vector m_vecWarpMin; // 0x_            
            // metadata: MPropertyFriendlyName "warp max"
            // metadata: MVectorIsCoordinate
            Vector m_vecWarpMax; // 0x_            
            // metadata: MPropertyFriendlyName "warp amount"
            source2sdk::particleslib::CPerParticleFloatInput m_InputValue; // 0x_            
            // metadata: MPropertyFriendlyName "previous position scale"
            float m_flPrevPosScale; // 0x_            
            // metadata: MPropertyFriendlyName "warp scale control point number"
            std::int32_t m_nScaleControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_PositionWarpScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_PositionWarpScalar) == 0x_);
    };
};
