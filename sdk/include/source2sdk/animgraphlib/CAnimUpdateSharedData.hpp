#pragma once
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimGraphSettingsManager.hpp"
#include "source2sdk/animgraphlib/CAnimNodePath.hpp"
#include "source2sdk/animgraphlib/CAnimParameterManagerUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimScriptManager.hpp"
#include "source2sdk/animgraphlib/CAnimTagManagerUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CStaticPoseCacheBuilder.hpp"
#include "source2sdk/modellib/CAnimSkeleton.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        // m_nodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSmartPtr<animgraphlib::CAnimUpdateNodeBase>> m_nodes;
        char m_nodes[0x18]; // 0x10        
        // m_nodeIndexMap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlHashtable<animgraphlib::CAnimNodePath,int32_t> m_nodeIndexMap;
        char m_nodeIndexMap[0x20]; // 0x28        
        // m_components has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSmartPtr<animgraphlib::CAnimComponentUpdater>> m_components;
        char m_components[0x18]; // 0x48        
        // m_pParamListUpdater has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSmartPtr<animgraphlib::CAnimParameterManagerUpdater> m_pParamListUpdater;
        char m_pParamListUpdater[0x8]; // 0x60        
        // m_pTagManagerUpdater has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSmartPtr<animgraphlib::CAnimTagManagerUpdater> m_pTagManagerUpdater;
        char m_pTagManagerUpdater[0x8]; // 0x68        
        // m_scriptManager has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSmartPtr<animgraphlib::CAnimScriptManager> m_scriptManager;
        char m_scriptManager[0x8]; // 0x70        
        animgraphlib::CAnimGraphSettingsManager m_settings; // 0x78        
        // m_pStaticPoseCache has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSmartPtr<animgraphlib::CStaticPoseCacheBuilder> m_pStaticPoseCache;
        char m_pStaticPoseCache[0x8]; // 0xa8        
        // m_pSkeleton has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSmartPtr<modellib::CAnimSkeleton> m_pSkeleton;
        char m_pSkeleton[0x8]; // 0xb0        
        animgraphlib::CAnimNodePath m_rootNodePath; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0xe8[0x18];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimUpdateSharedData, m_nodes) == 0x10);
    static_assert(offsetof(CAnimUpdateSharedData, m_nodeIndexMap) == 0x28);
    static_assert(offsetof(CAnimUpdateSharedData, m_components) == 0x48);
    static_assert(offsetof(CAnimUpdateSharedData, m_pParamListUpdater) == 0x60);
    static_assert(offsetof(CAnimUpdateSharedData, m_pTagManagerUpdater) == 0x68);
    static_assert(offsetof(CAnimUpdateSharedData, m_scriptManager) == 0x70);
    static_assert(offsetof(CAnimUpdateSharedData, m_settings) == 0x78);
    static_assert(offsetof(CAnimUpdateSharedData, m_pStaticPoseCache) == 0xa8);
    static_assert(offsetof(CAnimUpdateSharedData, m_pSkeleton) == 0xb0);
    static_assert(offsetof(CAnimUpdateSharedData, m_rootNodePath) == 0xb8);
    
    static_assert(sizeof(CAnimUpdateSharedData) == 0x100);
};
