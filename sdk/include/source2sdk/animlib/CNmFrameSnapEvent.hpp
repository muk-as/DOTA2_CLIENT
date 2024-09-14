#pragma once
#include "source2sdk/animlib/CNmEvent.hpp"
#include "source2sdk/animlib/NmFrameSnapEventMode_t.hpp"
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
    // Size: 0x20
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmFrameSnapEvent : public animlib::CNmEvent
    {
    public:
        animlib::NmFrameSnapEventMode_t m_frameSnapMode; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmFrameSnapEvent because it is not a standard-layout class
    static_assert(sizeof(CNmFrameSnapEvent) == 0x20);
};
