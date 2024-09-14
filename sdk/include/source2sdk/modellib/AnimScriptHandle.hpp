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
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyEditClassAsString
    #pragma pack(push, 1)
    class AnimScriptHandle
    {
    public:
        uint32_t m_id; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AnimScriptHandle, m_id) == 0x0);
    
    static_assert(sizeof(AnimScriptHandle) == 0x4);
};
