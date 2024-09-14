#pragma once
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
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSSDSMsg_ViewRender
    {
    public:
        scenesystem::SceneViewId_t m_viewId; // 0x0        
        CUtlString m_ViewName; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSSDSMsg_ViewRender, m_viewId) == 0x0);
    static_assert(offsetof(CSSDSMsg_ViewRender, m_ViewName) == 0x10);
    
    static_assert(sizeof(CSSDSMsg_ViewRender) == 0x18);
};
