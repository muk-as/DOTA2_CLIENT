#pragma once
#include "source2sdk/animlib/CNmEvent.hpp"
#include "source2sdk/animlib/NmTransitionRule_t.hpp"
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
    // Standard-layout class: false
    // Size: 0x28
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmTransitionEvent : public animlib::CNmEvent
    {
    public:
        animlib::NmTransitionRule_t m_rule; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x7]; // 0x19
        CGlobalSymbol m_ID; // 0x20        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmTransitionEvent because it is not a standard-layout class
    static_assert(sizeof(CNmTransitionEvent) == 0x28);
};
