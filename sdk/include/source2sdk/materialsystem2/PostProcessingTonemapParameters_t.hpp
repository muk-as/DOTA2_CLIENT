#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        struct PostProcessingTonemapParameters_t
        {
        public:
            float m_flExposureBias; // 0x_            
            float m_flShoulderStrength; // 0x_            
            float m_flLinearStrength; // 0x_            
            float m_flLinearAngle; // 0x_            
            float m_flToeStrength; // 0x_            
            float m_flToeNum; // 0x_            
            float m_flToeDenom; // 0x_            
            float m_flWhitePoint; // 0x_            
            float m_flLuminanceSource; // 0x_            
            float m_flExposureBiasShadows; // 0x_            
            float m_flExposureBiasHighlights; // 0x_            
            float m_flMinShadowLum; // 0x_            
            float m_flMaxShadowLum; // 0x_            
            float m_flMinHighlightLum; // 0x_            
            float m_flMaxHighlightLum; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flExposureBias) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flShoulderStrength) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flLinearStrength) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flLinearAngle) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flToeStrength) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flToeNum) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flToeDenom) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flWhitePoint) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flLuminanceSource) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flExposureBiasShadows) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flExposureBiasHighlights) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flMinShadowLum) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flMaxShadowLum) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flMinHighlightLum) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t, m_flMaxHighlightLum) == 0x_);
        
        static_assert(sizeof(source2sdk::materialsystem2::PostProcessingTonemapParameters_t) == 0x_);
    };
};
