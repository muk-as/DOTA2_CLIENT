#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/worldrenderer/BakedLightingInfo_t.hpp"

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
        // Size: 0x48
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct WorldBuilderParams_t
        {
        public:
            float m_flMinDrawVolumeSize; // 0x0            
            bool m_bBuildBakedLighting; // 0x4            
            bool m_bAggregateInstanceStreams; // 0x5            
            uint8_t _pad0006[0x2]; // 0x6
            source2sdk::worldrenderer::BakedLightingInfo_t m_bakedLightingInfo; // 0x8            
            std::uint64_t m_nCompileTimestamp; // 0x38            
            std::uint64_t m_nCompileFingerprint; // 0x40            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::WorldBuilderParams_t, m_flMinDrawVolumeSize) == 0x0);
        static_assert(offsetof(source2sdk::worldrenderer::WorldBuilderParams_t, m_bBuildBakedLighting) == 0x4);
        static_assert(offsetof(source2sdk::worldrenderer::WorldBuilderParams_t, m_bAggregateInstanceStreams) == 0x5);
        static_assert(offsetof(source2sdk::worldrenderer::WorldBuilderParams_t, m_bakedLightingInfo) == 0x8);
        static_assert(offsetof(source2sdk::worldrenderer::WorldBuilderParams_t, m_nCompileTimestamp) == 0x38);
        static_assert(offsetof(source2sdk::worldrenderer::WorldBuilderParams_t, m_nCompileFingerprint) == 0x40);
        
        static_assert(sizeof(source2sdk::worldrenderer::WorldBuilderParams_t) == 0x48);
    };
};
