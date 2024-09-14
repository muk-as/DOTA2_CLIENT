#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x2
    // Alignment: 0x2
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CNmGraphDefinition__ChildGraphSlot_t
    {
    public:
        int16_t m_nNodeIdx; // 0x0        
        int16_t m_dataSlotIdx; // 0x2        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmGraphDefinition__ChildGraphSlot_t, m_nNodeIdx) == 0x0);
    static_assert(offsetof(CNmGraphDefinition__ChildGraphSlot_t, m_dataSlotIdx) == 0x2);
    
    static_assert(sizeof(CNmGraphDefinition__ChildGraphSlot_t) == 0x4);
};
