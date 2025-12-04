#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"

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
        class C_INIT_CreateSpiralSphere : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "override CP (X/Y/Z *= radius/density/speed)"
            std::int32_t m_nOverrideCP; // 0x_            
            // metadata: MPropertyFriendlyName "density"
            std::int32_t m_nDensity; // 0x_            
            // metadata: MPropertyFriendlyName "initial radius"
            float m_flInitialRadius; // 0x_            
            // metadata: MPropertyFriendlyName "min initial speed"
            float m_flInitialSpeedMin; // 0x_            
            // metadata: MPropertyFriendlyName "max initial speed"
            float m_flInitialSpeedMax; // 0x_            
            // metadata: MPropertyFriendlyName "use particle count as density scale"
            bool m_bUseParticleCount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateSpiralSphere because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateSpiralSphere) == 0x_);
    };
};
