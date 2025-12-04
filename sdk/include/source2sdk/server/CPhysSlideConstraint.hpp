#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysConstraint.hpp"
#include "source2sdk/server/ConstraintSoundInfo.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysSlideConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            Vector m_axisEnd; // 0x_            
            float m_slideFriction; // 0x_            
            float m_systemLoadScale; // 0x_            
            float m_initialOffset; // 0x_            
            bool m_bEnableLinearConstraint; // 0x_            
            bool m_bEnableAngularConstraint; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMotorFrequency; // 0x_            
            float m_flMotorDampingRatio; // 0x_            
            bool m_bUseEntityPivot; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::ConstraintSoundInfo m_soundInfo; // 0x_            
            
            // Datamap fields:
            // float InputSetOffset; // 0x_
            // float InputSetVelocity; // 0x_
            // float InputSetSlideFriction; // 0x_
            // void CPhysSlideConstraintSoundThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysSlideConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysSlideConstraint) == 0x_);
    };
};
