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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            source2sdk::particleslib::ParticleVecType_t m_nType; // 0x_            
            Vector m_vLiteralValue; // 0x_            
            Color m_LiteralColor; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CParticleNamedValueRef m_NamedValue; // 0x_            
            bool m_bFollowNamedValue; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::particles::ParticleAttributeIndex_t m_nVectorAttribute; // 0x_            
            Vector m_vVectorAttributeScale; // 0x_            
            std::int32_t m_nControlPoint; // 0x_            
            std::int32_t m_nDeltaControlPoint; // 0x_            
            Vector m_vCPValueScale; // 0x_            
            Vector m_vCPRelativePosition; // 0x_            
            Vector m_vCPRelativeDir; // 0x_            
            source2sdk::particleslib::CParticleFloatInput m_FloatComponentX; // 0x_            
            source2sdk::particleslib::CParticleFloatInput m_FloatComponentY; // 0x_            
            source2sdk::particleslib::CParticleFloatInput m_FloatComponentZ; // 0x_            
            source2sdk::particleslib::CParticleFloatInput m_FloatInterp; // 0x_            
            float m_flInterpInput0; // 0x_            
            float m_flInterpInput1; // 0x_            
            Vector m_vInterpOutput0; // 0x_            
            Vector m_vInterpOutput1; // 0x_            
            CColorGradient m_Gradient; // 0x_            
            Vector m_vRandomMin; // 0x_            
            Vector m_vRandomMax; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleVecInput because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particleslib::CParticleVecInput) == 0x_);
    };
};
