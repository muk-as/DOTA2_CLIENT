#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseNode_CDefinition.hpp"
#include "source2sdk/animlib/CNmStateNode_TimedEvent_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmStateNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            std::int16_t m_nChildNodeIdx; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_entryEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3> m_entryEvents;
            char m_entryEvents[0x_]; // 0x_            
            // m_executeEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3> m_executeEvents;
            char m_executeEvents[0x_]; // 0x_            
            // m_exitEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3> m_exitEvents;
            char m_exitEvents[0x_]; // 0x_            
            // m_timedRemainingEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::animlib::CNmStateNode_TimedEvent_t,1> m_timedRemainingEvents;
            char m_timedRemainingEvents[0x_]; // 0x_            
            // m_timedElapsedEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::animlib::CNmStateNode_TimedEvent_t,1> m_timedElapsedEvents;
            char m_timedElapsedEvents[0x_]; // 0x_            
            std::int16_t m_nLayerWeightNodeIdx; // 0x_            
            std::int16_t m_nLayerRootMotionWeightNodeIdx; // 0x_            
            std::int16_t m_nLayerBoneMaskNodeIdx; // 0x_            
            bool m_bIsOffState; // 0x_            
            bool m_bUseActualElapsedTimeInStateForTimedEvents; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmStateNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmStateNode_CDefinition) == 0x_);
    };
};
