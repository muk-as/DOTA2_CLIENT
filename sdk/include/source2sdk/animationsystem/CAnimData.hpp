#pragma once
#include "source2sdk/animationsystem/CAnimDecoder.hpp"
#include "source2sdk/animationsystem/CAnimDesc.hpp"
#include "source2sdk/animationsystem/CAnimFrameSegment.hpp"
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
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimData
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        CBufferString m_name; // 0x10        
        // m_animArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimDesc> m_animArray;
        char m_animArray[0x18]; // 0x20        
        // m_decoderArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimDecoder> m_decoderArray;
        char m_decoderArray[0x18]; // 0x38        
        int32_t m_nMaxUniqueFrameIndex; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x54[0x4]; // 0x54
        // m_segmentArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimFrameSegment> m_segmentArray;
        char m_segmentArray[0x18]; // 0x58        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimData, m_name) == 0x10);
    static_assert(offsetof(CAnimData, m_animArray) == 0x20);
    static_assert(offsetof(CAnimData, m_decoderArray) == 0x38);
    static_assert(offsetof(CAnimData, m_nMaxUniqueFrameIndex) == 0x50);
    static_assert(offsetof(CAnimData, m_segmentArray) == 0x58);
    
    static_assert(sizeof(CAnimData) == 0x70);
};
