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
    // Size: 0x88
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFeMorphLayer
    {
    public:
        CUtlString m_Name; // 0x0        
        uint32_t m_nNameHash; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // m_Nodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint16_t> m_Nodes;
        char m_Nodes[0x18]; // 0x10        
        // m_InitPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_InitPos;
        char m_InitPos[0x18]; // 0x28        
        // m_Gravity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_Gravity;
        char m_Gravity[0x18]; // 0x40        
        // m_GoalStrength has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_GoalStrength;
        char m_GoalStrength[0x18]; // 0x58        
        // m_GoalDamping has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_GoalDamping;
        char m_GoalDamping[0x18]; // 0x70        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CFeMorphLayer, m_Name) == 0x0);
    static_assert(offsetof(CFeMorphLayer, m_nNameHash) == 0x8);
    static_assert(offsetof(CFeMorphLayer, m_Nodes) == 0x10);
    static_assert(offsetof(CFeMorphLayer, m_InitPos) == 0x28);
    static_assert(offsetof(CFeMorphLayer, m_Gravity) == 0x40);
    static_assert(offsetof(CFeMorphLayer, m_GoalStrength) == 0x58);
    static_assert(offsetof(CFeMorphLayer, m_GoalDamping) == 0x70);
    
    static_assert(sizeof(CFeMorphLayer) == 0x88);
};
