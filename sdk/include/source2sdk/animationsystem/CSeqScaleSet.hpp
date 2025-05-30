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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x50
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSeqScaleSet
        {
        public:
            CBufferString m_sName; // 0x0            
            bool m_bRootOffset; // 0x10            
            uint8_t _pad0011[0x3]; // 0x11
            Vector m_vRootOffset; // 0x14            
            // m_nLocalBoneArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int16_t> m_nLocalBoneArray;
            char m_nLocalBoneArray[0x18]; // 0x20            
            // m_flBoneScaleArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flBoneScaleArray;
            char m_flBoneScaleArray[0x18]; // 0x38            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqScaleSet, m_sName) == 0x0);
        static_assert(offsetof(source2sdk::animationsystem::CSeqScaleSet, m_bRootOffset) == 0x10);
        static_assert(offsetof(source2sdk::animationsystem::CSeqScaleSet, m_vRootOffset) == 0x14);
        static_assert(offsetof(source2sdk::animationsystem::CSeqScaleSet, m_nLocalBoneArray) == 0x20);
        static_assert(offsetof(source2sdk::animationsystem::CSeqScaleSet, m_flBoneScaleArray) == 0x38);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqScaleSet) == 0x50);
    };
};
