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
    // Size: 0x60
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSeqBoneMaskList
    {
    public:
        CBufferString m_sName; // 0x0        
        // m_nLocalBoneArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int16_t> m_nLocalBoneArray;
        char m_nLocalBoneArray[0x18]; // 0x10        
        // m_flBoneWeightArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_flBoneWeightArray;
        char m_flBoneWeightArray[0x18]; // 0x28        
        float m_flDefaultMorphCtrlWeight; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4]; // 0x44
        // m_morphCtrlWeightArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlPair<CBufferString,float>> m_morphCtrlWeightArray;
        char m_morphCtrlWeightArray[0x18]; // 0x48        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSeqBoneMaskList, m_sName) == 0x0);
    static_assert(offsetof(CSeqBoneMaskList, m_nLocalBoneArray) == 0x10);
    static_assert(offsetof(CSeqBoneMaskList, m_flBoneWeightArray) == 0x28);
    static_assert(offsetof(CSeqBoneMaskList, m_flDefaultMorphCtrlWeight) == 0x40);
    static_assert(offsetof(CSeqBoneMaskList, m_morphCtrlWeightArray) == 0x48);
    
    static_assert(sizeof(CSeqBoneMaskList) == 0x60);
};
