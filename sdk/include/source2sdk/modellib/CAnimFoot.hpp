#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimFoot
    {
    public:
        CUtlString m_name; // 0x0        
        Vector m_vBallOffset; // 0x8        
        Vector m_vHeelOffset; // 0x14        
        int32_t m_ankleBoneIndex; // 0x20        
        int32_t m_toeBoneIndex; // 0x24        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimFoot, m_name) == 0x0);
    static_assert(offsetof(CAnimFoot, m_vBallOffset) == 0x8);
    static_assert(offsetof(CAnimFoot, m_vHeelOffset) == 0x14);
    static_assert(offsetof(CAnimFoot, m_ankleBoneIndex) == 0x20);
    static_assert(offsetof(CAnimFoot, m_toeBoneIndex) == 0x24);
    
    static_assert(sizeof(CAnimFoot) == 0x28);
};
