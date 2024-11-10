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
    // Size: 0x570
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CPhysBallSocket : public server::CPhysConstraint
    {
    public:
        float m_flJointFriction; // 0x558        
        bool m_bEnableSwingLimit; // 0x55c        
        [[maybe_unused]] std::uint8_t pad_0x55d[0x3]; // 0x55d
        float m_flSwingLimit; // 0x560        
        bool m_bEnableTwistLimit; // 0x564        
        [[maybe_unused]] std::uint8_t pad_0x565[0x3]; // 0x565
        float m_flMinTwistAngle; // 0x568        
        float m_flMaxTwistAngle; // 0x56c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysBallSocket because it is not a standard-layout class
    static_assert(sizeof(CPhysBallSocket) == 0x570);
};
