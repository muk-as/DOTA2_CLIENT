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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x80
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PostProcessingBloomParameters_t
        {
        public:
            source2sdk::materialsystem2::BloomBlendMode_t m_blendMode; // 0x0            
            float m_flBloomStrength; // 0x4            
            float m_flScreenBloomStrength; // 0x8            
            float m_flBlurBloomStrength; // 0xc            
            float m_flBloomThreshold; // 0x10            
            float m_flBloomThresholdWidth; // 0x14            
            float m_flSkyboxBloomStrength; // 0x18            
            float m_flBloomStartValue; // 0x1c            
            float m_flComputeBloomStrength; // 0x20            
            float m_flComputeBloomThreshold; // 0x24            
            float m_flComputeBloomLensDirtStrength; // 0x28            
            float m_flComputeBloomLensDirtBlackLevel; // 0x2c            
            float m_flBlurWeight[5]; // 0x30            
            Vector m_vBlurTint[5]; // 0x44            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_blendMode) == 0x0);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flBloomStrength) == 0x4);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flScreenBloomStrength) == 0x8);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flBlurBloomStrength) == 0xc);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flBloomThreshold) == 0x10);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flBloomThresholdWidth) == 0x14);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flSkyboxBloomStrength) == 0x18);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flBloomStartValue) == 0x1c);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flComputeBloomStrength) == 0x20);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flComputeBloomThreshold) == 0x24);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flComputeBloomLensDirtStrength) == 0x28);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flComputeBloomLensDirtBlackLevel) == 0x2c);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_flBlurWeight) == 0x30);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingBloomParameters_t, m_vBlurTint) == 0x44);
        
        static_assert(sizeof(source2sdk::materialsystem2::PostProcessingBloomParameters_t) == 0x80);
    };
};
