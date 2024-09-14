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
    // Size: 0x40
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSeqPoseSetting
    {
    public:
        CBufferString m_sPoseParameter; // 0x0        
        CBufferString m_sAttachment; // 0x10        
        CBufferString m_sReferenceSequence; // 0x20        
        float m_flValue; // 0x30        
        bool m_bX; // 0x34        
        bool m_bY; // 0x35        
        bool m_bZ; // 0x36        
        [[maybe_unused]] std::uint8_t pad_0x37[0x1]; // 0x37
        int32_t m_eType; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSeqPoseSetting, m_sPoseParameter) == 0x0);
    static_assert(offsetof(CSeqPoseSetting, m_sAttachment) == 0x10);
    static_assert(offsetof(CSeqPoseSetting, m_sReferenceSequence) == 0x20);
    static_assert(offsetof(CSeqPoseSetting, m_flValue) == 0x30);
    static_assert(offsetof(CSeqPoseSetting, m_bX) == 0x34);
    static_assert(offsetof(CSeqPoseSetting, m_bY) == 0x35);
    static_assert(offsetof(CSeqPoseSetting, m_bZ) == 0x36);
    static_assert(offsetof(CSeqPoseSetting, m_eType) == 0x38);
    
    static_assert(sizeof(CSeqPoseSetting) == 0x40);
};
