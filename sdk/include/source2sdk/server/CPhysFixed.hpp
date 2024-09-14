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
    // Size: 0x548
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysFixed : public server::CPhysConstraint
    {
    public:
        float m_flLinearFrequency; // 0x530        
        float m_flLinearDampingRatio; // 0x534        
        float m_flAngularFrequency; // 0x538        
        float m_flAngularDampingRatio; // 0x53c        
        bool m_bEnableLinearConstraint; // 0x540        
        bool m_bEnableAngularConstraint; // 0x541        
        [[maybe_unused]] std::uint8_t pad_0x542[0x6];
        
        // Datamap fields:
        // float InputSetLinearFrequency; // 0x0
        // float InputSetLinearDampingRatio; // 0x0
        // float InputSetAngularFrequency; // 0x0
        // float InputSetAngularDampingRatio; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysFixed because it is not a standard-layout class
    static_assert(sizeof(CPhysFixed) == 0x548);
};
