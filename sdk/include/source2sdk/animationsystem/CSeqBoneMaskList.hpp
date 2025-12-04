#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSeqBoneMaskList
        {
        public:
            CBufferString m_sName; // 0x_            
            // m_nLocalBoneArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_nLocalBoneArray;
            char m_nLocalBoneArray[0x_]; // 0x_            
            // m_flBoneWeightArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flBoneWeightArray;
            char m_flBoneWeightArray[0x_]; // 0x_            
            float m_flDefaultMorphCtrlWeight; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_morphCtrlWeightArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std_pair<CBufferString,float>> m_morphCtrlWeightArray;
            char m_morphCtrlWeightArray[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqBoneMaskList, m_sName) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqBoneMaskList, m_nLocalBoneArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqBoneMaskList, m_flBoneWeightArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqBoneMaskList, m_flDefaultMorphCtrlWeight) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqBoneMaskList, m_morphCtrlWeightArray) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqBoneMaskList) == 0x_);
    };
};
