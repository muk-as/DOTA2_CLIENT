#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/CSeqBoneMaskList.hpp"
#include "source2sdk/animationsystem/CSeqCmdSeqDesc.hpp"
#include "source2sdk/animationsystem/CSeqIKLock.hpp"
#include "source2sdk/animationsystem/CSeqPoseParamDesc.hpp"
#include "source2sdk/animationsystem/CSeqS1SeqDesc.hpp"
#include "source2sdk/animationsystem/CSeqScaleSet.hpp"
#include "source2sdk/animationsystem/CSeqSynthAnimDesc.hpp"

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
        // Size: 0x138
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSequenceGroupData
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            CBufferString m_sName; // 0x10            
            std::uint32_t m_nFlags; // 0x20            
            uint8_t _pad0024[0x4]; // 0x24
            // m_localSequenceNameArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CBufferString> m_localSequenceNameArray;
            char m_localSequenceNameArray[0x18]; // 0x28            
            // m_localS1SeqDescArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CSeqS1SeqDesc> m_localS1SeqDescArray;
            char m_localS1SeqDescArray[0x18]; // 0x40            
            // m_localMultiSeqDescArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CSeqS1SeqDesc> m_localMultiSeqDescArray;
            char m_localMultiSeqDescArray[0x18]; // 0x58            
            // m_localSynthAnimDescArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CSeqSynthAnimDesc> m_localSynthAnimDescArray;
            char m_localSynthAnimDescArray[0x18]; // 0x70            
            // m_localCmdSeqDescArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CSeqCmdSeqDesc> m_localCmdSeqDescArray;
            char m_localCmdSeqDescArray[0x18]; // 0x88            
            // m_localBoneMaskArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CSeqBoneMaskList> m_localBoneMaskArray;
            char m_localBoneMaskArray[0x18]; // 0xa0            
            // m_localScaleSetArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CSeqScaleSet> m_localScaleSetArray;
            char m_localScaleSetArray[0x18]; // 0xb8            
            // m_localBoneNameArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CBufferString> m_localBoneNameArray;
            char m_localBoneNameArray[0x18]; // 0xd0            
            CBufferString m_localNodeName; // 0xe8            
            // m_localPoseParamArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CSeqPoseParamDesc> m_localPoseParamArray;
            char m_localPoseParamArray[0x18]; // 0xf8            
            KeyValues3 m_keyValues; // 0x110            
            // m_localIKAutoplayLockArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CSeqIKLock> m_localIKAutoplayLockArray;
            char m_localIKAutoplayLockArray[0x18]; // 0x120            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_sName) == 0x10);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_nFlags) == 0x20);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_localSequenceNameArray) == 0x28);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_localS1SeqDescArray) == 0x40);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_localMultiSeqDescArray) == 0x58);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_localSynthAnimDescArray) == 0x70);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_localCmdSeqDescArray) == 0x88);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_localBoneMaskArray) == 0xa0);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_localScaleSetArray) == 0xb8);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_localBoneNameArray) == 0xd0);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_localNodeName) == 0xe8);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_localPoseParamArray) == 0xf8);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_keyValues) == 0x110);
        static_assert(offsetof(source2sdk::animationsystem::CSequenceGroupData, m_localIKAutoplayLockArray) == 0x120);
        
        static_assert(sizeof(source2sdk::animationsystem::CSequenceGroupData) == 0x138);
    };
};
