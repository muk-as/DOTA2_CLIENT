#pragma once
#include "source2sdk/animgraphlib/CMotionNode.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class MotionBlendItem
    {
    public:
        // m_pChild has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSmartPtr<animgraphlib::CMotionNode> m_pChild;
        char m_pChild[0x8]; // 0x0        
        float m_flKeyValue; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(MotionBlendItem, m_pChild) == 0x0);
    static_assert(offsetof(MotionBlendItem, m_flKeyValue) == 0x8);
    
    static_assert(sizeof(MotionBlendItem) == 0x10);
};
