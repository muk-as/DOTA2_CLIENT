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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x100
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimUpdateSharedData
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            // m_nodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPtr<source2sdk::animgraphlib::CAnimUpdateNodeBase>> m_nodes;
            char m_nodes[0x18]; // 0x10            
            // m_nodeIndexMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<source2sdk::animgraphlib::CAnimNodePath,std::int32_t> m_nodeIndexMap;
            char m_nodeIndexMap[0x20]; // 0x28            
            // m_components has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSmartPtr<source2sdk::animgraphlib::CAnimComponentUpdater>> m_components;
            char m_components[0x18]; // 0x48            
            // m_pParamListUpdater has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CAnimParameterManagerUpdater> m_pParamListUpdater;
            char m_pParamListUpdater[0x8]; // 0x60            
            // m_pTagManagerUpdater has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CAnimTagManagerUpdater> m_pTagManagerUpdater;
            char m_pTagManagerUpdater[0x8]; // 0x68            
            // m_scriptManager has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CAnimScriptManager> m_scriptManager;
            char m_scriptManager[0x8]; // 0x70            
            source2sdk::animgraphlib::CAnimGraphSettingsManager m_settings; // 0x78            
            // m_pStaticPoseCache has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::animgraphlib::CStaticPoseCacheBuilder> m_pStaticPoseCache;
            char m_pStaticPoseCache[0x8]; // 0xa8            
            // m_pSkeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSmartPtr<source2sdk::modellib::CAnimSkeleton> m_pSkeleton;
            char m_pSkeleton[0x8]; // 0xb0            
            source2sdk::animgraphlib::CAnimNodePath m_rootNodePath; // 0xb8            
            uint8_t _pad00e8[0x18];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_nodes) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_nodeIndexMap) == 0x28);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_components) == 0x48);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_pParamListUpdater) == 0x60);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_pTagManagerUpdater) == 0x68);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_scriptManager) == 0x70);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_settings) == 0x78);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_pStaticPoseCache) == 0xa8);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_pSkeleton) == 0xb0);
        static_assert(offsetof(source2sdk::animgraphlib::CAnimUpdateSharedData, m_rootNodePath) == 0xb8);
        
        static_assert(sizeof(source2sdk::animgraphlib::CAnimUpdateSharedData) == 0x100);
    };
};
