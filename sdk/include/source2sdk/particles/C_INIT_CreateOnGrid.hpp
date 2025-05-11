#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
        // Size: 0xa10
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreateOnGrid : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "X Dimension Count"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nXCount; // 0x1c8            
            // metadata: MPropertyFriendlyName "Y Dimension Count"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nYCount; // 0x328            
            // metadata: MPropertyFriendlyName "Z Dimension Count"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nZCount; // 0x488            
            // metadata: MPropertyFriendlyName "X Dimension Spacing"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nXSpacing; // 0x5e8            
            // metadata: MPropertyFriendlyName "Y Dimension Spacing"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nYSpacing; // 0x748            
            // metadata: MPropertyFriendlyName "Z Dimension Spacing"
            source2sdk::particleslib::CParticleCollectionFloatInput m_nZSpacing; // 0x8a8            
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0xa08            
            // metadata: MPropertyFriendlyName "use local space"
            bool m_bLocalSpace; // 0xa0c            
            // metadata: MPropertyFriendlyName "center around control point"
            bool m_bCenter; // 0xa0d            
            // metadata: MPropertyFriendlyName "hollow"
            bool m_bHollow; // 0xa0e            
            uint8_t _pad0a0f[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateOnGrid because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateOnGrid) == 0xa10);
    };
};
