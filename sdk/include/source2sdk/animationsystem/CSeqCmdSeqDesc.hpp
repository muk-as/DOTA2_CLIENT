#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/CAnimActivity.hpp"
#include "source2sdk/animationsystem/CAnimEventDefinition.hpp"
#include "source2sdk/animationsystem/CSeqCmdLayer.hpp"
#include "source2sdk/animationsystem/CSeqPoseSetting.hpp"
#include "source2sdk/animationsystem/CSeqSeqDescFlag.hpp"
#include "source2sdk/animationsystem/CSeqTransition.hpp"

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
        // Size: 0x90
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSeqCmdSeqDesc
        {
        public:
            CBufferString m_sName; // 0x0            
            source2sdk::animationsystem::CSeqSeqDescFlag m_flags; // 0x10            
            uint8_t _pad001b[0x1]; // 0x1b
            source2sdk::animationsystem::CSeqTransition m_transition; // 0x1c            
            std::int16_t m_nFrameRangeSequence; // 0x24            
            std::int16_t m_nFrameCount; // 0x26            
            float m_flFPS; // 0x28            
            std::int16_t m_nSubCycles; // 0x2c            
            std::int16_t m_numLocalResults; // 0x2e            
            // m_cmdLayerArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CSeqCmdLayer> m_cmdLayerArray;
            char m_cmdLayerArray[0x18]; // 0x30            
            // m_eventArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimEventDefinition> m_eventArray;
            char m_eventArray[0x18]; // 0x48            
            // m_activityArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimActivity> m_activityArray;
            char m_activityArray[0x18]; // 0x60            
            // m_poseSettingArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CSeqPoseSetting> m_poseSettingArray;
            char m_poseSettingArray[0x18]; // 0x78            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdSeqDesc, m_sName) == 0x0);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdSeqDesc, m_flags) == 0x10);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdSeqDesc, m_transition) == 0x1c);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdSeqDesc, m_nFrameRangeSequence) == 0x24);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdSeqDesc, m_nFrameCount) == 0x26);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdSeqDesc, m_flFPS) == 0x28);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdSeqDesc, m_nSubCycles) == 0x2c);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdSeqDesc, m_numLocalResults) == 0x2e);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdSeqDesc, m_cmdLayerArray) == 0x30);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdSeqDesc, m_eventArray) == 0x48);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdSeqDesc, m_activityArray) == 0x60);
        static_assert(offsetof(source2sdk::animationsystem::CSeqCmdSeqDesc, m_poseSettingArray) == 0x78);
        
        static_assert(sizeof(source2sdk::animationsystem::CSeqCmdSeqDesc) == 0x90);
    };
};
