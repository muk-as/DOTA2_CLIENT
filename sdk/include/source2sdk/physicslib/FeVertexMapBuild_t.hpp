#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeVertexMapBuild_t
    {
    public:
        CUtlString m_VertexMapName; // 0x0        
        uint32_t m_nNameHash; // 0x8        
        Color m_Color; // 0xc        
        float m_flVolumetricSolveStrength; // 0x10        
        int32_t m_nScaleSourceNode; // 0x14        
        // m_Weights has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_Weights;
        char m_Weights[0x18]; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeVertexMapBuild_t, m_VertexMapName) == 0x0);
    static_assert(offsetof(FeVertexMapBuild_t, m_nNameHash) == 0x8);
    static_assert(offsetof(FeVertexMapBuild_t, m_Color) == 0xc);
    static_assert(offsetof(FeVertexMapBuild_t, m_flVolumetricSolveStrength) == 0x10);
    static_assert(offsetof(FeVertexMapBuild_t, m_nScaleSourceNode) == 0x14);
    static_assert(offsetof(FeVertexMapBuild_t, m_Weights) == 0x18);
    
    static_assert(sizeof(FeVertexMapBuild_t) == 0x30);
};
