#pragma once
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
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSSDSEndFrameViewInfo
    {
    public:
        uint64_t m_nViewId; // 0x0        
        CUtlString m_ViewName; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSSDSEndFrameViewInfo, m_nViewId) == 0x0);
    static_assert(offsetof(CSSDSEndFrameViewInfo, m_ViewName) == 0x8);
    
    static_assert(sizeof(CSSDSEndFrameViewInfo) == 0x10);
};
