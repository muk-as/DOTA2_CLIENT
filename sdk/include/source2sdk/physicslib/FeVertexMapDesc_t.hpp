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
    // Size: 0x38
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeVertexMapDesc_t
    {
    public:
        CUtlString sName; // 0x0        
        uint32_t nNameHash; // 0x8        
        uint32_t nColor; // 0xc        
        uint32_t nFlags; // 0x10        
        uint16_t nVertexBase; // 0x14        
        uint16_t nVertexCount; // 0x16        
        uint32_t nMapOffset; // 0x18        
        uint32_t nNodeListOffset; // 0x1c        
        Vector vCenterOfMass; // 0x20        
        float flVolumetricSolveStrength; // 0x2c        
        int16_t nScaleSourceNode; // 0x30        
        uint16_t nNodeListCount; // 0x32        
        [[maybe_unused]] std::uint8_t pad_0x34[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeVertexMapDesc_t, sName) == 0x0);
    static_assert(offsetof(FeVertexMapDesc_t, nNameHash) == 0x8);
    static_assert(offsetof(FeVertexMapDesc_t, nColor) == 0xc);
    static_assert(offsetof(FeVertexMapDesc_t, nFlags) == 0x10);
    static_assert(offsetof(FeVertexMapDesc_t, nVertexBase) == 0x14);
    static_assert(offsetof(FeVertexMapDesc_t, nVertexCount) == 0x16);
    static_assert(offsetof(FeVertexMapDesc_t, nMapOffset) == 0x18);
    static_assert(offsetof(FeVertexMapDesc_t, nNodeListOffset) == 0x1c);
    static_assert(offsetof(FeVertexMapDesc_t, vCenterOfMass) == 0x20);
    static_assert(offsetof(FeVertexMapDesc_t, flVolumetricSolveStrength) == 0x2c);
    static_assert(offsetof(FeVertexMapDesc_t, nScaleSourceNode) == 0x30);
    static_assert(offsetof(FeVertexMapDesc_t, nNodeListCount) == 0x32);
    
    static_assert(sizeof(FeVertexMapDesc_t) == 0x38);
};
