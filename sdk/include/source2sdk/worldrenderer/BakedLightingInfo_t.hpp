#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x30
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct BakedLightingInfo_t
        {
        public:
            std::uint32_t m_nLightmapVersionNumber; // 0x0            
            std::uint32_t m_nLightmapGameVersionNumber; // 0x4            
            Vector2D m_vLightmapUvScale; // 0x8            
            bool m_bHasLightmaps; // 0x10            
            bool m_bBakedShadowsGamma20; // 0x11            
            bool m_bCompressionEnabled; // 0x12            
            bool m_bSHLightmaps; // 0x13            
            std::uint8_t m_nChartPackIterations; // 0x14            
            std::uint8_t m_nVradQuality; // 0x15            
            uint8_t _pad0016[0x2]; // 0x16
            // m_lightMaps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase>> m_lightMaps;
            char m_lightMaps[0x18]; // 0x18            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_nLightmapVersionNumber) == 0x0);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_nLightmapGameVersionNumber) == 0x4);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_vLightmapUvScale) == 0x8);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_bHasLightmaps) == 0x10);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_bBakedShadowsGamma20) == 0x11);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_bCompressionEnabled) == 0x12);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_bSHLightmaps) == 0x13);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_nChartPackIterations) == 0x14);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_nVradQuality) == 0x15);
        static_assert(offsetof(source2sdk::worldrenderer::BakedLightingInfo_t, m_lightMaps) == 0x18);
        
        static_assert(sizeof(source2sdk::worldrenderer::BakedLightingInfo_t) == 0x30);
    };
};
