#pragma once
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/server/navproperties_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4f0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CLogicNavigation : public server::CLogicalEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e0[0x8]; // 0x4e0
        bool m_isOn; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4e9[0x3]; // 0x4e9
        server::navproperties_t m_navProperty; // 0x4ec        
        
        // Datamap fields:
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputToggle; // 0x0
        // CUtlString navprop; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicNavigation because it is not a standard-layout class
    static_assert(sizeof(CLogicNavigation) == 0x4f0);
};
