#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleFloatInput.hpp"
#include "source2sdk/particleslib/CParticleInput.hpp"
#include "source2sdk/particleslib/ParticleVecType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particleslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x678
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MClassIsParticleVec
        // static metadata: MParticleCustomFieldDefaultValue
        #pragma pack(push, 1)
        class CParticleVecInput : public source2sdk::particleslib::CParticleInput
        {
        public:
            source2sdk::particleslib::ParticleVecType_t m_nType; // 0x10            
            Vector m_vLiteralValue; // 0x14            
            Color m_LiteralColor; // 0x20            
            uint8_t _pad0024[0x4]; // 0x24
            CParticleNamedValueRef m_NamedValue; // 0x28            
            bool m_bFollowNamedValue; // 0x68            
            uint8_t _pad0069[0x3]; // 0x69
            source2sdk::particles::ParticleAttributeIndex_t m_nVectorAttribute; // 0x6c            
            Vector m_vVectorAttributeScale; // 0x70            
            std::int32_t m_nControlPoint; // 0x7c            
            std::int32_t m_nDeltaControlPoint; // 0x80            
            Vector m_vCPValueScale; // 0x84            
            Vector m_vCPRelativePosition; // 0x90            
            Vector m_vCPRelativeDir; // 0x9c            
            source2sdk::particleslib::CParticleFloatInput m_FloatComponentX; // 0xa8            
            source2sdk::particleslib::CParticleFloatInput m_FloatComponentY; // 0x208            
            source2sdk::particleslib::CParticleFloatInput m_FloatComponentZ; // 0x368            
            source2sdk::particleslib::CParticleFloatInput m_FloatInterp; // 0x4c8            
            float m_flInterpInput0; // 0x628            
            float m_flInterpInput1; // 0x62c            
            Vector m_vInterpOutput0; // 0x630            
            Vector m_vInterpOutput1; // 0x63c            
            CColorGradient m_Gradient; // 0x648            
            Vector m_vRandomMin; // 0x660            
            Vector m_vRandomMax; // 0x66c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleVecInput because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particleslib::CParticleVecInput) == 0x678);
    };
};
