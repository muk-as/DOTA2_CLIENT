#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/worldrenderer/BakedLightingInfo_t_BakedShadowAssignment_t.hpp"

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
        struct BakedLightingInfo_t
        {
        public:
            std::uint32_t m_nLightmapVersionNumber; // 0x_            
            std::uint32_t m_nLightmapGameVersionNumber; // 0x_            
            Vector2D m_vLightmapUvScale; // 0x_            
            bool m_bHasLightmaps; // 0x_            
            bool m_bBakedShadowsGamma20; // 0x_            
            bool m_bCompressionEnabled; // 0x_            
            bool m_bSHLightmaps; // 0x_            
            std::uint8_t m_nChartPackIterations; // 0x_            
            std::uint8_t m_nVradQuality; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_lightMaps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase>> m_lightMaps;
            char m_lightMaps[0x_]; // 0x_            
            // m_bakedShadows has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::worldrenderer::BakedLightingInfo_t_BakedShadowAssignment_t> m_bakedShadows;
            char m_bakedShadows[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_nLightmapVersionNumber) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_nLightmapGameVersionNumber) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_vLightmapUvScale) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_bHasLightmaps) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_bBakedShadowsGamma20) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_bCompressionEnabled) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_bSHLightmaps) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_nChartPackIterations) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_nVradQuality) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_lightMaps) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_bakedShadows) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::BakedLightingInfo_t) == 0x_);
    };
};
