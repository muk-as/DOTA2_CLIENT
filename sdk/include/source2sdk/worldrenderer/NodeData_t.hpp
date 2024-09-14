#pragma once
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
    // Size: 0x50
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct NodeData_t
    {
    public:
        int32_t m_nParent; // 0x0        
        Vector m_vOrigin; // 0x4        
        Vector m_vMinBounds; // 0x10        
        Vector m_vMaxBounds; // 0x1c        
        float m_flMinimumDistance; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4]; // 0x2c
        // m_ChildNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_ChildNodeIndices;
        char m_ChildNodeIndices[0x18]; // 0x30        
        CUtlString m_worldNodePrefix; // 0x48        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(NodeData_t, m_nParent) == 0x0);
    static_assert(offsetof(NodeData_t, m_vOrigin) == 0x4);
    static_assert(offsetof(NodeData_t, m_vMinBounds) == 0x10);
    static_assert(offsetof(NodeData_t, m_vMaxBounds) == 0x1c);
    static_assert(offsetof(NodeData_t, m_flMinimumDistance) == 0x28);
    static_assert(offsetof(NodeData_t, m_ChildNodeIndices) == 0x30);
    static_assert(offsetof(NodeData_t, m_worldNodePrefix) == 0x48);
    
    static_assert(sizeof(NodeData_t) == 0x50);
};
