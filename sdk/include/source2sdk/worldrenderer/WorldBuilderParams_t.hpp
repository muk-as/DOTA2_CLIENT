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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct WorldBuilderParams_t
        {
        public:
            float m_flMinDrawVolumeSize; // 0x_            
            bool m_bBuildBakedLighting; // 0x_            
            bool m_bAggregateInstanceStreams; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::worldrenderer::BakedLightingInfo_t m_bakedLightingInfo; // 0x_            
            std::uint64_t m_nCompileTimestamp; // 0x_            
            std::uint64_t m_nCompileFingerprint; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::WorldBuilderParams_t, m_flMinDrawVolumeSize) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldBuilderParams_t, m_bBuildBakedLighting) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldBuilderParams_t, m_bAggregateInstanceStreams) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldBuilderParams_t, m_bakedLightingInfo) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldBuilderParams_t, m_nCompileTimestamp) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::WorldBuilderParams_t, m_nCompileFingerprint) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::WorldBuilderParams_t) == 0x_);
    };
};
