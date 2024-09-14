#pragma once
#include "source2sdk/server/CPhysForce.hpp"
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
    // Size: 0x528
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysTorque : public server::CPhysForce
    {
    public:
        Vector m_axis; // 0x518        
        [[maybe_unused]] std::uint8_t pad_0x524[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysTorque because it is not a standard-layout class
    static_assert(sizeof(CPhysTorque) == 0x528);
};
