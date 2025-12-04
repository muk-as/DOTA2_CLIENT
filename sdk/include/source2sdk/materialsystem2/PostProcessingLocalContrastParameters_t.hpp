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
        struct PostProcessingLocalContrastParameters_t
        {
        public:
            float m_flLocalContrastStrength; // 0x_            
            float m_flLocalContrastEdgeStrength; // 0x_            
            float m_flLocalContrastVignetteStart; // 0x_            
            float m_flLocalContrastVignetteEnd; // 0x_            
            float m_flLocalContrastVignetteBlur; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingLocalContrastParameters_t, m_flLocalContrastStrength) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingLocalContrastParameters_t, m_flLocalContrastEdgeStrength) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingLocalContrastParameters_t, m_flLocalContrastVignetteStart) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingLocalContrastParameters_t, m_flLocalContrastVignetteEnd) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingLocalContrastParameters_t, m_flLocalContrastVignetteBlur) == 0x_);
        
        static_assert(sizeof(source2sdk::materialsystem2::PostProcessingLocalContrastParameters_t) == 0x_);
    };
};
