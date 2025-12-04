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
        struct PostProcessingVignetteParameters_t
        {
        public:
            float m_flVignetteStrength; // 0x_            
            Vector2D m_vCenter; // 0x_            
            float m_flRadius; // 0x_            
            float m_flRoundness; // 0x_            
            float m_flFeather; // 0x_            
            Vector m_vColorTint; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingVignetteParameters_t, m_flVignetteStrength) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingVignetteParameters_t, m_vCenter) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingVignetteParameters_t, m_flRadius) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingVignetteParameters_t, m_flRoundness) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingVignetteParameters_t, m_flFeather) == 0x_);
        static_assert(offsetof(source2sdk::materialsystem2::PostProcessingVignetteParameters_t, m_vColorTint) == 0x_);
        
        static_assert(sizeof(source2sdk::materialsystem2::PostProcessingVignetteParameters_t) == 0x_);
    };
};
