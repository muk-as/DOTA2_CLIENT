#pragma once
#include "source2sdk/server/CPhysConstraint.hpp"
#include "source2sdk/server/ConstraintSoundInfo.hpp"
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
    // Size: 0x610
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CPhysSlideConstraint : public server::CPhysConstraint
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x558[0x8]; // 0x558
        Vector m_axisEnd; // 0x560        
        float m_slideFriction; // 0x56c        
        float m_systemLoadScale; // 0x570        
        float m_initialOffset; // 0x574        
        bool m_bEnableLinearConstraint; // 0x578        
        bool m_bEnableAngularConstraint; // 0x579        
        [[maybe_unused]] std::uint8_t pad_0x57a[0x2]; // 0x57a
        float m_flMotorFrequency; // 0x57c        
        float m_flMotorDampingRatio; // 0x580        
        bool m_bUseEntityPivot; // 0x584        
        [[maybe_unused]] std::uint8_t pad_0x585[0x3]; // 0x585
        server::ConstraintSoundInfo m_soundInfo; // 0x588        
        
        // Datamap fields:
        // float InputSetOffset; // 0x0
        // float InputSetVelocity; // 0x0
        // float InputSetSlideFriction; // 0x0
        // void CPhysSlideConstraintSoundThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysSlideConstraint because it is not a standard-layout class
    static_assert(sizeof(CPhysSlideConstraint) == 0x610);
};
