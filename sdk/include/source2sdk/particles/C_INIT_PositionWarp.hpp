#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
        // Size: 0xed8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_PositionWarp : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "warp min"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_vecWarpMin; // 0x1c8            
            // metadata: MPropertyFriendlyName "warp max"
            // metadata: MVectorIsCoordinate
            source2sdk::particleslib::CParticleCollectionVecInput m_vecWarpMax; // 0x840            
            // metadata: MPropertyFriendlyName "warp scale control point number"
            std::int32_t m_nScaleControlPointNumber; // 0xeb8            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0xebc            
            // metadata: MPropertyFriendlyName "radius scale component"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nRadiusComponent; // 0xec0            
            // metadata: MPropertyFriendlyName "warp transition time (treats min/max as start/end sizes)"
            float m_flWarpTime; // 0xec4            
            // metadata: MPropertyFriendlyName "warp transition start time"
            float m_flWarpStartTime; // 0xec8            
            // metadata: MPropertyFriendlyName "previous position sacale"
            float m_flPrevPosScale; // 0xecc            
            // metadata: MPropertyFriendlyName "reverse warp (0/1)"
            bool m_bInvertWarp; // 0xed0            
            // metadata: MPropertyFriendlyName "use particle count instead of time"
            bool m_bUseCount; // 0xed1            
            uint8_t _pad0ed2[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_PositionWarp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_PositionWarp) == 0xed8);
    };
};
