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
        struct PostProcessingFogScatteringParameters_t
        {
        public:
            float m_fRadius; // 0x_            
            float m_fScale; // 0x_            
            float m_fCubemapScale; // 0x_            
            float m_fVolumetricScale; // 0x_            
            float m_fGradientScale; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingFogScatteringParameters_t, m_fRadius) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingFogScatteringParameters_t, m_fScale) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingFogScatteringParameters_t, m_fCubemapScale) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingFogScatteringParameters_t, m_fVolumetricScale) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingFogScatteringParameters_t, m_fGradientScale) == 0x_);
        
        static_assert(sizeof(source2sdk::materialsystem2::PostProcessingFogScatteringParameters_t) == 0x_);
    };
};
