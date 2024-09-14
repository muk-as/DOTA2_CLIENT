#pragma once
#include "source2sdk/server/CPhysConstraint.hpp"
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
    // Size: 0x588
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CSplineConstraint : public server::CPhysConstraint
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x530[0x48]; // 0x530
        Vector m_vAnchorOffsetRestore; // 0x578        
        [[maybe_unused]] std::uint8_t pad_0x584[0x4];
        
        // Datamap fields:
        // void CSplineConstraintUpdateThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSplineConstraint because it is not a standard-layout class
    static_assert(sizeof(CSplineConstraint) == 0x588);
};
