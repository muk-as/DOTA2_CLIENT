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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1f8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreatePhyllotaxis : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1c8            
            // metadata: MPropertyFriendlyName "scale size multiplier from CP"
            std::int32_t m_nScaleCP; // 0x1cc            
            // metadata: MPropertyFriendlyName "scale CP component 0/1/2 X/Y/Z"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nComponent; // 0x1d0            
            // metadata: MPropertyFriendlyName "center core radius"
            float m_fRadCentCore; // 0x1d4            
            // metadata: MPropertyFriendlyName "radius multiplier"
            float m_fRadPerPoint; // 0x1d8            
            // metadata: MPropertyFriendlyName "radius max (-1 procedural growth)"
            float m_fRadPerPointTo; // 0x1dc            
            // metadata: MPropertyFriendlyName "golden angle (is 137.508)"
            float m_fpointAngle; // 0x1e0            
            // metadata: MPropertyFriendlyName "overall size multiplier (-1 count based distribution)"
            float m_fsizeOverall; // 0x1e4            
            // metadata: MPropertyFriendlyName "radius bias"
            float m_fRadBias; // 0x1e8            
            // metadata: MPropertyFriendlyName "radius min "
            float m_fMinRad; // 0x1ec            
            // metadata: MPropertyFriendlyName "distribution bias"
            float m_fDistBias; // 0x1f0            
            // metadata: MPropertyFriendlyName "local space"
            bool m_bUseLocalCoords; // 0x1f4            
            // metadata: MPropertyFriendlyName "use continuous emission"
            bool m_bUseWithContEmit; // 0x1f5            
            // metadata: MPropertyFriendlyName "scale radius from initial value"
            bool m_bUseOrigRadius; // 0x1f6            
            uint8_t _pad01f7[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreatePhyllotaxis because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreatePhyllotaxis) == 0x1f8);
    };
};
