#pragma once
#include "source2sdk/animationsystem/AnimationDecodeDebugDumpElement_t.hpp"
#include "source2sdk/animationsystem/AnimationProcessingType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AnimationDecodeDebugDump_t
    {
    public:
        animationsystem::AnimationProcessingType_t m_processingType; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_elems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::AnimationDecodeDebugDumpElement_t> m_elems;
        char m_elems[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AnimationDecodeDebugDump_t, m_processingType) == 0x0);
    static_assert(offsetof(AnimationDecodeDebugDump_t, m_elems) == 0x8);
    
    static_assert(sizeof(AnimationDecodeDebugDump_t) == 0x20);
};
