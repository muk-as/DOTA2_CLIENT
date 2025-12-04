#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/materialsystem2/PostProcessingBloomParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingFogScatteringParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingLocalContrastParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingTonemapParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingVignetteParameters_t.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PostProcessingResource_t
        {
        public:
            bool m_bHasTonemapParams; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::materialsystem2::PostProcessingTonemapParameters_t m_toneMapParams; // 0x_            
            bool m_bHasBloomParams; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::materialsystem2::PostProcessingBloomParameters_t m_bloomParams; // 0x_            
            bool m_bHasVignetteParams; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::materialsystem2::PostProcessingVignetteParameters_t m_vignetteParams; // 0x_            
            bool m_bHasLocalContrastParams; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::materialsystem2::PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0x_            
            std::int32_t m_nColorCorrectionVolumeDim; // 0x_            
            CUtlBinaryBlock m_colorCorrectionVolumeData; // 0x_            
            bool m_bHasColorCorrection; // 0x_            
            bool m_bHasFogScatteringParams; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::materialsystem2::PostProcessingFogScatteringParameters_t m_fogScatteringParams; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasTonemapParams) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_toneMapParams) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasBloomParams) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bloomParams) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasVignetteParams) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_vignetteParams) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasLocalContrastParams) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_localConstrastParams) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_nColorCorrectionVolumeDim) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_colorCorrectionVolumeData) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasColorCorrection) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasFogScatteringParams) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_fogScatteringParams) == 0x_);
        
        static_assert(sizeof(source2sdk::materialsystem2::PostProcessingResource_t) == 0x_);
    };
};
