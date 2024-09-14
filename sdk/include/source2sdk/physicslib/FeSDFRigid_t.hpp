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
    // Size: 0x48
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct FeSDFRigid_t
    {
    public:
        Vector vLocalMin; // 0x0        
        Vector vLocalMax; // 0xc        
        uint16_t nNode; // 0x18        
        uint16_t nCollisionMask; // 0x1a        
        uint16_t nVertexMapIndex; // 0x1c        
        uint16_t nFlags; // 0x1e        
        // m_Distances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_Distances;
        char m_Distances[0x18]; // 0x20        
        int32_t m_nWidth; // 0x38        
        int32_t m_nHeight; // 0x3c        
        int32_t m_nDepth; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FeSDFRigid_t, vLocalMin) == 0x0);
    static_assert(offsetof(FeSDFRigid_t, vLocalMax) == 0xc);
    static_assert(offsetof(FeSDFRigid_t, nNode) == 0x18);
    static_assert(offsetof(FeSDFRigid_t, nCollisionMask) == 0x1a);
    static_assert(offsetof(FeSDFRigid_t, nVertexMapIndex) == 0x1c);
    static_assert(offsetof(FeSDFRigid_t, nFlags) == 0x1e);
    static_assert(offsetof(FeSDFRigid_t, m_Distances) == 0x20);
    static_assert(offsetof(FeSDFRigid_t, m_nWidth) == 0x38);
    static_assert(offsetof(FeSDFRigid_t, m_nHeight) == 0x3c);
    static_assert(offsetof(FeSDFRigid_t, m_nDepth) == 0x40);
    
    static_assert(sizeof(FeSDFRigid_t) == 0x48);
};
