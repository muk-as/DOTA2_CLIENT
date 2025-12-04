#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct InfoOverlayData_t
        {
        public:
            matrix3x4_t m_transform; // 0x_            
            float m_flWidth; // 0x_            
            float m_flHeight; // 0x_            
            float m_flDepth; // 0x_            
            Vector2D m_vUVStart; // 0x_            
            Vector2D m_vUVEnd; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_pMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_pMaterial;
            char m_pMaterial[0x_]; // 0x_            
            std::int32_t m_nRenderOrder; // 0x_            
            Vector4D m_vTintColor; // 0x_            
            std::int32_t m_nSequenceOverride; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::InfoOverlayData_t, m_transform) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::InfoOverlayData_t, m_flWidth) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::InfoOverlayData_t, m_flHeight) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::InfoOverlayData_t, m_flDepth) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::InfoOverlayData_t, m_vUVStart) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::InfoOverlayData_t, m_vUVEnd) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::InfoOverlayData_t, m_pMaterial) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::InfoOverlayData_t, m_nRenderOrder) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::InfoOverlayData_t, m_vTintColor) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::InfoOverlayData_t, m_nSequenceOverride) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::InfoOverlayData_t) == 0x_);
    };
};
