#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimGraphSettingsManager.hpp"
#include "source2sdk/animgraphlib/CAnimNodePath.hpp"
#include "source2sdk/animgraphlib/CAnimParameterManagerUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimScriptManager.hpp"
#include "source2sdk/animgraphlib/CAnimTagManagerUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CStaticPoseCacheBuilder.hpp"
#include "source2sdk/modellib/CAnimSkeleton.hpp"

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
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimUpdateSharedData
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_nodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPtr<source2sdk::animgraphlib::CAnimUpdateNodeBase>> m_nodes;
            char m_nodes[0x_]; // 0x_            
            // m_nodeIndexMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<source2sdk::animgraphlib::CAnimNodePath,std::int32_t> m_nodeIndexMap;
            char m_nodeIndexMap[0x_]; // 0x_            
            // m_components has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPtr<source2sdk::animgraphlib::CAnimComponentUpdater>> m_components;
            char m_components[0x_]; // 0x_            
            // m_pParamListUpdater has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CAnimParameterManagerUpdater> m_pParamListUpdater;
            char m_pParamListUpdater[0x_]; // 0x_            
            // m_pTagManagerUpdater has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CAnimTagManagerUpdater> m_pTagManagerUpdater;
            char m_pTagManagerUpdater[0x_]; // 0x_            
            // m_scriptManager has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CAnimScriptManager> m_scriptManager;
            char m_scriptManager[0x_]; // 0x_            
            source2sdk::animgraphlib::CAnimGraphSettingsManager m_settings; // 0x_            
            // m_pStaticPoseCache has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CStaticPoseCacheBuilder> m_pStaticPoseCache;
            char m_pStaticPoseCache[0x_]; // 0x_            
            // m_pSkeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::modellib::CAnimSkeleton> m_pSkeleton;
            char m_pSkeleton[0x_]; // 0x_            
            source2sdk::animgraphlib::CAnimNodePath m_rootNodePath; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_nodes) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_nodeIndexMap) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_components) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_pParamListUpdater) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_pTagManagerUpdater) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_scriptManager) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_settings) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_pStaticPoseCache) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_pSkeleton) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_rootNodePath) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimUpdateSharedData) == 0x_);
    };
};
