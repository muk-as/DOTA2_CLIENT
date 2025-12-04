#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CStateActionUpdater.hpp"
#include "source2sdk/modellib/AnimScriptHandle.hpp"
#include "source2sdk/modellib/AnimStateID.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CStateUpdateData
        {
        public:
            CUtlString m_name; // 0x_            
            source2sdk::modellib::AnimScriptHandle m_hScript; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_transitionIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_transitionIndices;
            char m_transitionIndices[0x_]; // 0x_            
            // m_actions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CStateActionUpdater> m_actions;
            char m_actions[0x_]; // 0x_            
            source2sdk::modellib::AnimStateID m_stateID; // 0x_            
            // start of bitfield block
            uint8_t m_bIsStartState: 1;
            uint8_t m_bIsEndState: 1;
            uint8_t m_bIsPassthrough: 1;
            uint8_t m_bIsPassthroughRootMotion: 1;
            uint8_t m_bPreEvaluatePassthroughTransitionPath: 1;
            // end of bitfield block// 5 bits
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CStateUpdateData, m_name) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CStateUpdateData, m_hScript) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CStateUpdateData, m_transitionIndices) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CStateUpdateData, m_actions) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CStateUpdateData, m_stateID) == 0x_);
        // Cannot assert offset of bitfield CStateUpdateData::m_bIsStartState
        // Cannot assert offset of bitfield CStateUpdateData::m_bIsEndState
        // Cannot assert offset of bitfield CStateUpdateData::m_bIsPassthrough
        // Cannot assert offset of bitfield CStateUpdateData::m_bIsPassthroughRootMotion
        // Cannot assert offset of bitfield CStateUpdateData::m_bPreEvaluatePassthroughTransitionPath
        
        static_assert(sizeof(source2sdk::animgraphlib::CStateUpdateData) == 0x_);
    };
};
