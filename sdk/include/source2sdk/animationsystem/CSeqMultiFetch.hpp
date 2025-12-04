#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/CSeqMultiFetchFlag.hpp"

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
        class CSeqMultiFetch
        {
        public:
            source2sdk::animationsystem::CSeqMultiFetchFlag m_flags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_localReferenceArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_localReferenceArray;
            char m_localReferenceArray[0x_]; // 0x_            
            std::int32_t m_nGroupSize[2]; // 0x_            
            std::int32_t m_nLocalPose[2]; // 0x_            
            // m_poseKeyArray0 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_poseKeyArray0;
            char m_poseKeyArray0[0x_]; // 0x_            
            // m_poseKeyArray1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_poseKeyArray1;
            char m_poseKeyArray1[0x_]; // 0x_            
            std::int32_t m_nLocalCyclePoseParameter; // 0x_            
            bool m_bCalculatePoseParameters; // 0x_            
            bool m_bFixedBlendWeight; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flFixedBlendWeightVals[2]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetch, m_flags) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetch, m_localReferenceArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetch, m_nGroupSize) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetch, m_nLocalPose) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetch, m_poseKeyArray0) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetch, m_poseKeyArray1) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetch, m_nLocalCyclePoseParameter) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetch, m_bCalculatePoseParameters) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetch, m_bFixedBlendWeight) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CSeqMultiFetch, m_flFixedBlendWeightVals) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqMultiFetch) == 0x_);
    };
};
