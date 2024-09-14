#pragma once
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
    // Size: 0x70
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct AnimationDecodeDebugDumpElement_t
    {
    public:
        int32_t m_nEntityIndex; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlString m_modelName; // 0x8        
        // m_poseParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_poseParams;
        char m_poseParams[0x18]; // 0x10        
        // m_decodeOps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_decodeOps;
        char m_decodeOps[0x18]; // 0x28        
        // m_internalOps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_internalOps;
        char m_internalOps[0x18]; // 0x40        
        // m_decodedAnims has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_decodedAnims;
        char m_decodedAnims[0x18]; // 0x58        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AnimationDecodeDebugDumpElement_t, m_nEntityIndex) == 0x0);
    static_assert(offsetof(AnimationDecodeDebugDumpElement_t, m_modelName) == 0x8);
    static_assert(offsetof(AnimationDecodeDebugDumpElement_t, m_poseParams) == 0x10);
    static_assert(offsetof(AnimationDecodeDebugDumpElement_t, m_decodeOps) == 0x28);
    static_assert(offsetof(AnimationDecodeDebugDumpElement_t, m_internalOps) == 0x40);
    static_assert(offsetof(AnimationDecodeDebugDumpElement_t, m_decodedAnims) == 0x58);
    
    static_assert(sizeof(AnimationDecodeDebugDumpElement_t) == 0x70);
};
