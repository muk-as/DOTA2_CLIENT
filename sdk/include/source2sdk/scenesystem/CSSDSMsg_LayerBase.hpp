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
    // Size: 0x38
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSSDSMsg_LayerBase
    {
    public:
        scenesystem::SceneViewId_t m_viewId; // 0x0        
        CUtlString m_ViewName; // 0x10        
        int32_t m_nLayerIndex; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        uint64_t m_nLayerId; // 0x20        
        CUtlString m_LayerName; // 0x28        
        CUtlString m_displayText; // 0x30        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSSDSMsg_LayerBase, m_viewId) == 0x0);
    static_assert(offsetof(CSSDSMsg_LayerBase, m_ViewName) == 0x10);
    static_assert(offsetof(CSSDSMsg_LayerBase, m_nLayerIndex) == 0x18);
    static_assert(offsetof(CSSDSMsg_LayerBase, m_nLayerId) == 0x20);
    static_assert(offsetof(CSSDSMsg_LayerBase, m_LayerName) == 0x28);
    static_assert(offsetof(CSSDSMsg_LayerBase, m_displayText) == 0x30);
    
    static_assert(sizeof(CSSDSMsg_LayerBase) == 0x38);
};
