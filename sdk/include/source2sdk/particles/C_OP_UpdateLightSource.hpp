#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"

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
        class C_OP_UpdateLightSource : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "color tint"
            Color m_vColorTint; // 0x_            
            // metadata: MPropertyFriendlyName "amount to multiply light brightness by"
            float m_flBrightnessScale; // 0x_            
            // metadata: MPropertyFriendlyName "amount to multiply particle system radius by to get light radius"
            float m_flRadiusScale; // 0x_            
            // metadata: MPropertyFriendlyName "minimum radius for created lights"
            float m_flMinimumLightingRadius; // 0x_            
            // metadata: MPropertyFriendlyName "maximum radius for created lights"
            float m_flMaximumLightingRadius; // 0x_            
            // metadata: MPropertyFriendlyName "amount of damping of changes"
            float m_flPositionDampingConstant; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_UpdateLightSource because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_UpdateLightSource) == 0x_);
    };
};
