#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CMotionGraph.hpp"
#include "source2sdk/animgraphlib/CMotionGraphConfig.hpp"
#include "source2sdk/animgraphlib/CMotionSearchDB.hpp"
#include "source2sdk/modellib/AnimScriptHandle.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x108
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMotionGraphGroup
        {
        public:
            source2sdk::animgraphlib::CMotionSearchDB m_searchDB; // 0x0            
            // m_motionGraphs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPtr<source2sdk::animgraphlib::CMotionGraph>> m_motionGraphs;
            char m_motionGraphs[0x18]; // 0xb8            
            // m_motionGraphConfigs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CMotionGraphConfig> m_motionGraphConfigs;
            char m_motionGraphConfigs[0x18]; // 0xd0            
            // m_sampleToConfig has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_sampleToConfig;
            char m_sampleToConfig[0x18]; // 0xe8            
            source2sdk::modellib::AnimScriptHandle m_hIsActiveScript; // 0x100            
            uint8_t _pad0104[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphGroup, m_searchDB) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphGroup, m_motionGraphs) == 0xb8);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphGroup, m_motionGraphConfigs) == 0xd0);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphGroup, m_sampleToConfig) == 0xe8);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphGroup, m_hIsActiveScript) == 0x100);
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionGraphGroup) == 0x108);
    };
};
