#pragma once
#include "source2sdk/animlib/CNmEvent.hpp"
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
    // Size: 0x38
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmLegacyEvent : public animlib::CNmEvent
    {
    public:
        CUtlString m_animEventClassName; // 0x18        
        KeyValues3 m_KV; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x30[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmLegacyEvent because it is not a standard-layout class
    static_assert(sizeof(CNmLegacyEvent) == 0x38);
};
