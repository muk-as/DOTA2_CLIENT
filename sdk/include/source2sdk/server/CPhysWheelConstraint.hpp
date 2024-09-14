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
    // Size: 0x560
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysWheelConstraint : public server::CPhysConstraint
    {
    public:
        float m_flSuspensionFrequency; // 0x530        
        float m_flSuspensionDampingRatio; // 0x534        
        float m_flSuspensionHeightOffset; // 0x538        
        bool m_bEnableSuspensionLimit; // 0x53c        
        [[maybe_unused]] std::uint8_t pad_0x53d[0x3]; // 0x53d
        float m_flMinSuspensionOffset; // 0x540        
        float m_flMaxSuspensionOffset; // 0x544        
        bool m_bEnableSteeringLimit; // 0x548        
        [[maybe_unused]] std::uint8_t pad_0x549[0x3]; // 0x549
        float m_flMinSteeringAngle; // 0x54c        
        float m_flMaxSteeringAngle; // 0x550        
        float m_flSteeringAxisFriction; // 0x554        
        float m_flSpinAxisFriction; // 0x558        
        [[maybe_unused]] std::uint8_t pad_0x55c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysWheelConstraint because it is not a standard-layout class
    static_assert(sizeof(CPhysWheelConstraint) == 0x560);
};
