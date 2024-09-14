#pragma once
#include "source2sdk/worldrenderer/BakedLightingInfo_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
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
        [[maybe_unused]] std::uint8_t pad_0x05[0x3]; // 0x5
        worldrenderer::BakedLightingInfo_t m_bakedLightingInfo; // 0x8        
        uint64_t m_nCompileTimestamp; // 0x38        
        uint64_t m_nCompileFingerprint; // 0x40        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(WorldBuilderParams_t, m_flMinDrawVolumeSize) == 0x0);
    static_assert(offsetof(WorldBuilderParams_t, m_bBuildBakedLighting) == 0x4);
    static_assert(offsetof(WorldBuilderParams_t, m_bakedLightingInfo) == 0x8);
    static_assert(offsetof(WorldBuilderParams_t, m_nCompileTimestamp) == 0x38);
    static_assert(offsetof(WorldBuilderParams_t, m_nCompileFingerprint) == 0x40);
    
    static_assert(sizeof(WorldBuilderParams_t) == 0x48);
};
