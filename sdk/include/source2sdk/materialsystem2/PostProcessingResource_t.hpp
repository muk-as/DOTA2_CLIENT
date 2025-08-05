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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x138
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct PostProcessingResource_t
        {
        public:
            bool m_bHasTonemapParams; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            source2sdk::materialsystem2::PostProcessingTonemapParameters_t m_toneMapParams; // 0x4            
            bool m_bHasBloomParams; // 0x40            
            uint8_t _pad0041[0x3]; // 0x41
            source2sdk::materialsystem2::PostProcessingBloomParameters_t m_bloomParams; // 0x44            
            bool m_bHasVignetteParams; // 0xcc            
            uint8_t _pad00cd[0x3]; // 0xcd
            source2sdk::materialsystem2::PostProcessingVignetteParameters_t m_vignetteParams; // 0xd0            
            bool m_bHasLocalContrastParams; // 0xf4            
            uint8_t _pad00f5[0x3]; // 0xf5
            source2sdk::materialsystem2::PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xf8            
            std::int32_t m_nColorCorrectionVolumeDim; // 0x10c            
            CUtlBinaryBlock m_colorCorrectionVolumeData; // 0x110            
            bool m_bHasColorCorrection; // 0x120            
            bool m_bHasFogScatteringParams; // 0x121            
            uint8_t _pad0122[0x2]; // 0x122
            source2sdk::materialsystem2::PostProcessingFogScatteringParameters_t m_fogScatteringParams; // 0x124            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasTonemapParams) == 0x0);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_toneMapParams) == 0x4);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasBloomParams) == 0x40);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bloomParams) == 0x44);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasVignetteParams) == 0xcc);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_vignetteParams) == 0xd0);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasLocalContrastParams) == 0xf4);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_localConstrastParams) == 0xf8);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_nColorCorrectionVolumeDim) == 0x10c);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_colorCorrectionVolumeData) == 0x110);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasColorCorrection) == 0x120);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_bHasFogScatteringParams) == 0x121);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingResource_t, m_fogScatteringParams) == 0x124);
        
        static_assert(sizeof(source2sdk::materialsystem2::PostProcessingResource_t) == 0x138);
    };
};
