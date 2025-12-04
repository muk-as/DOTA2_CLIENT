#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleInput.hpp"
#include "source2sdk/particleslib/PFNoiseModifier_t.hpp"
#include "source2sdk/particleslib/PFNoiseTurbulence_t.hpp"
#include "source2sdk/particleslib/PFNoiseType_t.hpp"
#include "source2sdk/particleslib/ParticleFloatBiasType_t.hpp"
#include "source2sdk/particleslib/ParticleFloatInputMode_t.hpp"
#include "source2sdk/particleslib/ParticleFloatMapType_t.hpp"
#include "source2sdk/particleslib/ParticleFloatRandomMode_t.hpp"
#include "source2sdk/particleslib/ParticleFloatRoundType_t.hpp"
#include "source2sdk/particleslib/ParticleFloatType_t.hpp"

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
        // static metadata: MClassIsParticleFloat
        // static metadata: MParticleCustomFieldDefaultValue
        #pragma pack(push, 1)
        class CParticleFloatInput : public source2sdk::particleslib::CParticleInput
        {
        public:
            source2sdk::particleslib::ParticleFloatType_t m_nType; // 0x_            
            source2sdk::particleslib::ParticleFloatMapType_t m_nMapType; // 0x_            
            float m_flLiteralValue; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CParticleNamedValueRef m_NamedValue; // 0x_            
            std::int32_t m_nControlPoint; // 0x_            
            source2sdk::particles::ParticleAttributeIndex_t m_nScalarAttribute; // 0x_            
            source2sdk::particles::ParticleAttributeIndex_t m_nVectorAttribute; // 0x_            
            std::int32_t m_nVectorComponent; // 0x_            
            float m_flRandomMin; // 0x_            
            float m_flRandomMax; // 0x_            
            bool m_bHasRandomSignFlip; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nRandomSeed; // 0x_            
            source2sdk::particleslib::ParticleFloatRandomMode_t m_nRandomMode; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flLOD0; // 0x_            
            float m_flLOD1; // 0x_            
            float m_flLOD2; // 0x_            
            float m_flLOD3; // 0x_            
            source2sdk::particles::ParticleAttributeIndex_t m_nNoiseInputVectorAttribute; // 0x_            
            float m_flNoiseOutputMin; // 0x_            
            float m_flNoiseOutputMax; // 0x_            
            float m_flNoiseScale; // 0x_            
            Vector m_vecNoiseOffsetRate; // 0x_            
            float m_flNoiseOffset; // 0x_            
            std::int32_t m_nNoiseOctaves; // 0x_            
            source2sdk::particleslib::PFNoiseTurbulence_t m_nNoiseTurbulence; // 0x_            
            source2sdk::particleslib::PFNoiseType_t m_nNoiseType; // 0x_            
            source2sdk::particleslib::PFNoiseModifier_t m_nNoiseModifier; // 0x_            
            float m_flNoiseTurbulenceScale; // 0x_            
            float m_flNoiseTurbulenceMix; // 0x_            
            float m_flNoiseImgPreviewScale; // 0x_            
            bool m_bNoiseImgPreviewLive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flNoCameraFallback; // 0x_            
            bool m_bUseBoundsCenter; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::particleslib::ParticleFloatInputMode_t m_nInputMode; // 0x_            
            float m_flMultFactor; // 0x_            
            float m_flInput0; // 0x_            
            float m_flInput1; // 0x_            
            float m_flOutput0; // 0x_            
            float m_flOutput1; // 0x_            
            float m_flNotchedRangeMin; // 0x_            
            float m_flNotchedRangeMax; // 0x_            
            float m_flNotchedOutputOutside; // 0x_            
            float m_flNotchedOutputInside; // 0x_            
            source2sdk::particleslib::ParticleFloatRoundType_t m_nRoundType; // 0x_            
            source2sdk::particleslib::ParticleFloatBiasType_t m_nBiasType; // 0x_            
            float m_flBiasParameter; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CPiecewiseCurve m_Curve; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleFloatInput because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particleslib::CParticleFloatInput) == 0x_);
    };
};
