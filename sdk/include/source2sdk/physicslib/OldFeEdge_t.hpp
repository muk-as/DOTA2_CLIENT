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
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x48
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct OldFeEdge_t
    {
    public:
        float m_flK[3]; // 0x0        
        float invA; // 0xc        
        float t; // 0x10        
        float flThetaRelaxed; // 0x14        
        float flThetaFactor; // 0x18        
        float c01; // 0x1c        
        float c02; // 0x20        
        float c03; // 0x24        
        float c04; // 0x28        
        float flAxialModelDist; // 0x2c        
        float flAxialModelWeights[4]; // 0x30        
        uint16_t m_nNode[4]; // 0x40        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(OldFeEdge_t, m_flK) == 0x0);
    static_assert(offsetof(OldFeEdge_t, invA) == 0xc);
    static_assert(offsetof(OldFeEdge_t, t) == 0x10);
    static_assert(offsetof(OldFeEdge_t, flThetaRelaxed) == 0x14);
    static_assert(offsetof(OldFeEdge_t, flThetaFactor) == 0x18);
    static_assert(offsetof(OldFeEdge_t, c01) == 0x1c);
    static_assert(offsetof(OldFeEdge_t, c02) == 0x20);
    static_assert(offsetof(OldFeEdge_t, c03) == 0x24);
    static_assert(offsetof(OldFeEdge_t, c04) == 0x28);
    static_assert(offsetof(OldFeEdge_t, flAxialModelDist) == 0x2c);
    static_assert(offsetof(OldFeEdge_t, flAxialModelWeights) == 0x30);
    static_assert(offsetof(OldFeEdge_t, m_nNode) == 0x40);
    
    static_assert(sizeof(OldFeEdge_t) == 0x48);
};
