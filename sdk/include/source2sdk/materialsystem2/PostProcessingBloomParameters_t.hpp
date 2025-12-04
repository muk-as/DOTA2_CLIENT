#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/materialsystem2/BloomBlendMode_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace materialsystem2
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PostProcessingBloomParameters_t
        {
        public:
            source2sdk::materialsystem2::BloomBlendMode_t m_blendMode; // 0x_            
            float m_flBloomStrength; // 0x_            
            float m_flScreenBloomStrength; // 0x_            
            float m_flBlurBloomStrength; // 0x_            
            float m_flBloomThreshold; // 0x_            
            float m_flBloomThresholdWidth; // 0x_            
            float m_flSkyboxBloomStrength; // 0x_            
            float m_flBloomStartValue; // 0x_            
            float m_flComputeBloomStrength; // 0x_            
            float m_flComputeBloomThreshold; // 0x_            
            float m_flComputeBloomRadius; // 0x_            
            float m_flComputeBloomEffectsScale; // 0x_            
            float m_flComputeBloomLensDirtStrength; // 0x_            
            float m_flComputeBloomLensDirtBlackLevel; // 0x_            
            float m_flBlurWeight[5]; // 0x_            
            Vector m_vBlurTint[5]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_blendMode) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flBloomStrength) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flScreenBloomStrength) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flBlurBloomStrength) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flBloomThreshold) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flBloomThresholdWidth) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flSkyboxBloomStrength) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flBloomStartValue) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flComputeBloomStrength) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flComputeBloomThreshold) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flComputeBloomRadius) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flComputeBloomEffectsScale) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flComputeBloomLensDirtStrength) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flComputeBloomLensDirtBlackLevel) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flBlurWeight) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_vBlurTint) == 0x_);
        
        static_assert(sizeof(source2sdk::materialsystem2::PostProcessingBloomParameters_t) == 0x_);
    };
};
