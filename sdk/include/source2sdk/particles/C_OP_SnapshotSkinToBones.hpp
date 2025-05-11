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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SnapshotSkinToBones : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "rotate normals"
            bool m_bTransformNormals; // 0x1c0            
            // metadata: MPropertyFriendlyName "scale radii"
            bool m_bTransformRadii; // 0x1c1            
            uint8_t _pad01c2[0x2]; // 0x1c2
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1c4            
            // metadata: MPropertyFriendlyName "lifetime fade start"
            float m_flLifeTimeFadeStart; // 0x1c8            
            // metadata: MPropertyFriendlyName "lifetime fade end"
            float m_flLifeTimeFadeEnd; // 0x1cc            
            // metadata: MPropertyFriendlyName "instant jump threshold"
            float m_flJumpThreshold; // 0x1d0            
            // metadata: MPropertyFriendlyName "previous position scale"
            float m_flPrevPosScale; // 0x1d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SnapshotSkinToBones because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SnapshotSkinToBones) == 0x1d8);
    };
};
