#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x90
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAttachment
    {
    public:
        CUtlString m_name; // 0x0        
        CUtlString m_influenceNames[3]; // 0x8        
        Quaternion m_vInfluenceRotations[3]; // 0x20        
        Vector m_vInfluenceOffsets[3]; // 0x50        
        float m_influenceWeights[3]; // 0x74        
        bool m_bInfluenceRootTransform[3]; // 0x80        
        uint8_t m_nInfluences; // 0x83        
        bool m_bIgnoreRotation; // 0x84        
        [[maybe_unused]] std::uint8_t pad_0x85[0xb];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAttachment, m_name) == 0x0);
    static_assert(offsetof(CAttachment, m_influenceNames) == 0x8);
    static_assert(offsetof(CAttachment, m_vInfluenceRotations) == 0x20);
    static_assert(offsetof(CAttachment, m_vInfluenceOffsets) == 0x50);
    static_assert(offsetof(CAttachment, m_influenceWeights) == 0x74);
    static_assert(offsetof(CAttachment, m_bInfluenceRootTransform) == 0x80);
    static_assert(offsetof(CAttachment, m_nInfluences) == 0x83);
    static_assert(offsetof(CAttachment, m_bIgnoreRotation) == 0x84);
    
    static_assert(sizeof(CAttachment) == 0x90);
};
