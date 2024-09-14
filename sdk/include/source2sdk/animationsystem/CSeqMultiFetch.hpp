#pragma once
#include "source2sdk/animationsystem/CSeqMultiFetchFlag.hpp"
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
    class CSeqMultiFetch
    {
    public:
        animationsystem::CSeqMultiFetchFlag m_flags; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x06[0x2]; // 0x6
        // m_localReferenceArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_localReferenceArray;
        char m_localReferenceArray[0x18]; // 0x8        
        int32_t m_nGroupSize[2]; // 0x20        
        int32_t m_nLocalPose[2]; // 0x28        
        // m_poseKeyArray0 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_poseKeyArray0;
        char m_poseKeyArray0[0x18]; // 0x30        
        // m_poseKeyArray1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_poseKeyArray1;
        char m_poseKeyArray1[0x18]; // 0x48        
        int32_t m_nLocalCyclePoseParameter; // 0x60        
        bool m_bCalculatePoseParameters; // 0x64        
        bool m_bFixedBlendWeight; // 0x65        
        [[maybe_unused]] std::uint8_t pad_0x66[0x2]; // 0x66
        float m_flFixedBlendWeightVals[2]; // 0x68        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSeqMultiFetch, m_flags) == 0x0);
    static_assert(offsetof(CSeqMultiFetch, m_localReferenceArray) == 0x8);
    static_assert(offsetof(CSeqMultiFetch, m_nGroupSize) == 0x20);
    static_assert(offsetof(CSeqMultiFetch, m_nLocalPose) == 0x28);
    static_assert(offsetof(CSeqMultiFetch, m_poseKeyArray0) == 0x30);
    static_assert(offsetof(CSeqMultiFetch, m_poseKeyArray1) == 0x48);
    static_assert(offsetof(CSeqMultiFetch, m_nLocalCyclePoseParameter) == 0x60);
    static_assert(offsetof(CSeqMultiFetch, m_bCalculatePoseParameters) == 0x64);
    static_assert(offsetof(CSeqMultiFetch, m_bFixedBlendWeight) == 0x65);
    static_assert(offsetof(CSeqMultiFetch, m_flFixedBlendWeightVals) == 0x68);
    
    static_assert(sizeof(CSeqMultiFetch) == 0x70);
};
