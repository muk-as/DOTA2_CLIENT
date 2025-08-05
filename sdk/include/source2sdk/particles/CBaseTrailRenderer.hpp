#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CBaseRendererSource2.hpp"
#include "source2sdk/particles/ParticleOrientationChoiceList_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2ef0
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBaseTrailRenderer : public source2sdk::particles::CBaseRendererSource2
        {
        public:
            // metadata: MPropertyStartGroup "Orientation"
            // metadata: MPropertyFriendlyName "orientation type"
            // metadata: MPropertySortPriority "750"
            source2sdk::particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x2c18            
            // metadata: MPropertyFriendlyName "orientation control point"
            // metadata: MPropertySortPriority "750"
            // metadata: MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
            std::int32_t m_nOrientationControlPoint; // 0x2c1c            
            // metadata: MPropertyStartGroup "Screenspace Fading and culling"
            // metadata: MPropertyFriendlyName "minimum visual screen-size"
            // metadata: MPropertySortPriority "900"
            float m_flMinSize; // 0x2c20            
            // metadata: MPropertyFriendlyName "maximum visual screen-size"
            // metadata: MPropertySortPriority "900"
            float m_flMaxSize; // 0x2c24            
            // metadata: MPropertyFriendlyName "start fade screen-size"
            // metadata: MPropertySortPriority "900"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x2c28            
            // metadata: MPropertyFriendlyName "end fade and cull screen-size"
            // metadata: MPropertySortPriority "900"
            source2sdk::particleslib::CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2d88            
            // metadata: MPropertyStartGroup "Trail UV Controls"
            // metadata: MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
            // metadata: MPropertySortPriority "800"
            bool m_bClampV; // 0x2ee8            
            uint8_t _pad2ee9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseTrailRenderer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::CBaseTrailRenderer) == 0x2ef0);
    };
};
