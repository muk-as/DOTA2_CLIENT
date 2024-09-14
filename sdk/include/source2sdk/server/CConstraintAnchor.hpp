#pragma once
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
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
    // Size: 0x7a0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CConstraintAnchor : public server::CBaseAnimatingActivity
    {
    public:
        float m_massScale; // 0x798        
        [[maybe_unused]] std::uint8_t pad_0x79c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CConstraintAnchor because it is not a standard-layout class
    static_assert(sizeof(CConstraintAnchor) == 0x7a0);
};
