#pragma once
#include "source2sdk/materialsystem2/PostProcessingBloomParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingLocalContrastParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingTonemapParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingVignetteParameters_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x118
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PostProcessingResource_t
    {
    public:
        bool m_bHasTonemapParams; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x3]; // 0x1
        materialsystem2::PostProcessingTonemapParameters_t m_toneMapParams; // 0x4        
        bool m_bHasBloomParams; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x41[0x3]; // 0x41
        materialsystem2::PostProcessingBloomParameters_t m_bloomParams; // 0x44        
        bool m_bHasVignetteParams; // 0xb4        
        [[maybe_unused]] std::uint8_t pad_0xb5[0x3]; // 0xb5
        materialsystem2::PostProcessingVignetteParameters_t m_vignetteParams; // 0xb8        
        bool m_bHasLocalContrastParams; // 0xdc        
        [[maybe_unused]] std::uint8_t pad_0xdd[0x3]; // 0xdd
        materialsystem2::PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xe0        
        int32_t m_nColorCorrectionVolumeDim; // 0xf4        
        CUtlBinaryBlock m_colorCorrectionVolumeData; // 0xf8        
        bool m_bHasColorCorrection; // 0x110        
        [[maybe_unused]] std::uint8_t pad_0x111[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PostProcessingResource_t, m_bHasTonemapParams) == 0x0);
    static_assert(offsetof(PostProcessingResource_t, m_toneMapParams) == 0x4);
    static_assert(offsetof(PostProcessingResource_t, m_bHasBloomParams) == 0x40);
    static_assert(offsetof(PostProcessingResource_t, m_bloomParams) == 0x44);
    static_assert(offsetof(PostProcessingResource_t, m_bHasVignetteParams) == 0xb4);
    static_assert(offsetof(PostProcessingResource_t, m_vignetteParams) == 0xb8);
    static_assert(offsetof(PostProcessingResource_t, m_bHasLocalContrastParams) == 0xdc);
    static_assert(offsetof(PostProcessingResource_t, m_localConstrastParams) == 0xe0);
    static_assert(offsetof(PostProcessingResource_t, m_nColorCorrectionVolumeDim) == 0xf4);
    static_assert(offsetof(PostProcessingResource_t, m_colorCorrectionVolumeData) == 0xf8);
    static_assert(offsetof(PostProcessingResource_t, m_bHasColorCorrection) == 0x110);
    
    static_assert(sizeof(PostProcessingResource_t) == 0x118);
};
