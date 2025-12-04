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
        class C_INIT_CreatePhyllotaxis : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x_            
            // metadata: MPropertyFriendlyName "scale size multiplier from CP"
            std::int32_t m_nScaleCP; // 0x_            
            // metadata: MPropertyFriendlyName "scale CP component 0/1/2 X/Y/Z"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nComponent; // 0x_            
            // metadata: MPropertyFriendlyName "center core radius"
            float m_fRadCentCore; // 0x_            
            // metadata: MPropertyFriendlyName "radius multiplier"
            float m_fRadPerPoint; // 0x_            
            // metadata: MPropertyFriendlyName "radius max (-1 procedural growth)"
            float m_fRadPerPointTo; // 0x_            
            // metadata: MPropertyFriendlyName "golden angle (is 137.508)"
            float m_fpointAngle; // 0x_            
            // metadata: MPropertyFriendlyName "overall size multiplier (-1 count based distribution)"
            float m_fsizeOverall; // 0x_            
            // metadata: MPropertyFriendlyName "radius bias"
            float m_fRadBias; // 0x_            
            // metadata: MPropertyFriendlyName "radius min "
            float m_fMinRad; // 0x_            
            // metadata: MPropertyFriendlyName "distribution bias"
            float m_fDistBias; // 0x_            
            // metadata: MPropertyFriendlyName "local space"
            bool m_bUseLocalCoords; // 0x_            
            // metadata: MPropertyFriendlyName "use continuous emission"
            bool m_bUseWithContEmit; // 0x_            
            // metadata: MPropertyFriendlyName "scale radius from initial value"
            bool m_bUseOrigRadius; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreatePhyllotaxis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreatePhyllotaxis) == 0x_);
    };
};
