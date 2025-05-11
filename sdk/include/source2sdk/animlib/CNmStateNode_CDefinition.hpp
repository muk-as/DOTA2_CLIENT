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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmStateNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            std::int16_t m_nChildNodeIdx; // 0x10            
            uint8_t _pad0012[0x6]; // 0x12
            // m_entryEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3> m_entryEvents;
            char m_entryEvents[0x20]; // 0x18            
            // m_executeEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3> m_executeEvents;
            char m_executeEvents[0x20]; // 0x38            
            // m_exitEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<CGlobalSymbol,3> m_exitEvents;
            char m_exitEvents[0x20]; // 0x58            
            // m_timedRemainingEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::animlib::CNmStateNode_TimedEvent_t,1> m_timedRemainingEvents;
            char m_timedRemainingEvents[0x18]; // 0x78            
            // m_timedElapsedEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::animlib::CNmStateNode_TimedEvent_t,1> m_timedElapsedEvents;
            char m_timedElapsedEvents[0x18]; // 0x90            
            std::int16_t m_nLayerWeightNodeIdx; // 0xa8            
            std::int16_t m_nLayerRootMotionWeightNodeIdx; // 0xaa            
            std::int16_t m_nLayerBoneMaskNodeIdx; // 0xac            
            bool m_bIsOffState; // 0xae            
            uint8_t _pad00af[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmStateNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmStateNode_CDefinition) == 0xb0);
    };
};
