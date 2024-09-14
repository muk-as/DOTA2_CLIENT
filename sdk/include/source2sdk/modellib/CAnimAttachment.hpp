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
    // Size: 0x80
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimAttachment
    {
    public:
        Quaternion m_influenceRotations[3]; // 0x0        
        VectorAligned m_influenceOffsets[3]; // 0x30        
        int32_t m_influenceIndices[3]; // 0x60        
        float m_influenceWeights[3]; // 0x6c        
        uint8_t m_numInfluences; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x79[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimAttachment, m_influenceRotations) == 0x0);
    static_assert(offsetof(CAnimAttachment, m_influenceOffsets) == 0x30);
    static_assert(offsetof(CAnimAttachment, m_influenceIndices) == 0x60);
    static_assert(offsetof(CAnimAttachment, m_influenceWeights) == 0x6c);
    static_assert(offsetof(CAnimAttachment, m_numInfluences) == 0x78);
    
    static_assert(sizeof(CAnimAttachment) == 0x80);
};
