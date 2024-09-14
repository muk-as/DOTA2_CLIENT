#pragma once
#include "source2sdk/scenesystem/CSSDSMsg_ViewTarget.hpp"
#include "source2sdk/scenesystem/SceneViewId_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: scenesystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::scenesystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSSDSMsg_ViewTargetList
    {
    public:
        scenesystem::SceneViewId_t m_viewId; // 0x0        
        CUtlString m_ViewName; // 0x10        
        // m_Targets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<scenesystem::CSSDSMsg_ViewTarget> m_Targets;
        char m_Targets[0x18]; // 0x18        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSSDSMsg_ViewTargetList, m_viewId) == 0x0);
    static_assert(offsetof(CSSDSMsg_ViewTargetList, m_ViewName) == 0x10);
    static_assert(offsetof(CSSDSMsg_ViewTargetList, m_Targets) == 0x18);
    
    static_assert(sizeof(CSSDSMsg_ViewTargetList) == 0x30);
};
