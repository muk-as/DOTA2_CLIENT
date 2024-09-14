#pragma once
#include "source2sdk/animlib/CNmEvent.hpp"
#include "source2sdk/animlib/NmTargetWarpAlgorithm_t.hpp"
#include "source2sdk/animlib/NmTargetWarpRule_t.hpp"
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
    class CNmTargetWarpEvent : public animlib::CNmEvent
    {
    public:
        animlib::NmTargetWarpRule_t m_rule; // 0x18        
        animlib::NmTargetWarpAlgorithm_t m_algorithm; // 0x19        
        [[maybe_unused]] std::uint8_t pad_0x1a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmTargetWarpEvent because it is not a standard-layout class
    static_assert(sizeof(CNmTargetWarpEvent) == 0x20);
};
