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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMotionGraphGroup
        {
        public:
            source2sdk::animgraphlib::CMotionSearchDB m_searchDB; // 0x_            
            // m_motionGraphs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPtr<source2sdk::animgraphlib::CMotionGraph>> m_motionGraphs;
            char m_motionGraphs[0x_]; // 0x_            
            // m_motionGraphConfigs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animgraphlib::CMotionGraphConfig> m_motionGraphConfigs;
            char m_motionGraphConfigs[0x_]; // 0x_            
            // m_sampleToConfig has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_sampleToConfig;
            char m_sampleToConfig[0x_]; // 0x_            
            source2sdk::modellib::AnimScriptHandle m_hIsActiveScript; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphGroup, m_searchDB) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphGroup, m_motionGraphs) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphGroup, m_motionGraphConfigs) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphGroup, m_sampleToConfig) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CMotionGraphGroup, m_hIsActiveScript) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CMotionGraphGroup) == 0x_);
    };
};
