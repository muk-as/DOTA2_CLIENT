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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CNmGraphDefinition__ExternalGraphSlot_t
    {
    public:
        int16_t m_nNodeIdx; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x02[0x6]; // 0x2
        CGlobalSymbol m_slotID; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmGraphDefinition__ExternalGraphSlot_t, m_nNodeIdx) == 0x0);
    static_assert(offsetof(CNmGraphDefinition__ExternalGraphSlot_t, m_slotID) == 0x8);
    
    static_assert(sizeof(CNmGraphDefinition__ExternalGraphSlot_t) == 0x10);
};
