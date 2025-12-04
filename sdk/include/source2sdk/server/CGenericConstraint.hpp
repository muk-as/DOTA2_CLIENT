#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/physicslib/JointMotion_t.hpp"
#include "source2sdk/server/CPhysConstraint.hpp"

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
        class CGenericConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::physicslib::JointMotion_t m_nLinearMotionX; // 0x_            
            source2sdk::physicslib::JointMotion_t m_nLinearMotionY; // 0x_            
            source2sdk::physicslib::JointMotion_t m_nLinearMotionZ; // 0x_            
            float m_flLinearFrequencyX; // 0x_            
            float m_flLinearFrequencyY; // 0x_            
            float m_flLinearFrequencyZ; // 0x_            
            float m_flLinearDampingRatioX; // 0x_            
            float m_flLinearDampingRatioY; // 0x_            
            float m_flLinearDampingRatioZ; // 0x_            
            float m_flMaxLinearImpulseX; // 0x_            
            float m_flMaxLinearImpulseY; // 0x_            
            float m_flMaxLinearImpulseZ; // 0x_            
            float m_flBreakAfterTimeX; // 0x_            
            float m_flBreakAfterTimeY; // 0x_            
            float m_flBreakAfterTimeZ; // 0x_            
            source2sdk::entity2::GameTime_t m_flBreakAfterTimeStartTimeX; // 0x_            
            source2sdk::entity2::GameTime_t m_flBreakAfterTimeStartTimeY; // 0x_            
            source2sdk::entity2::GameTime_t m_flBreakAfterTimeStartTimeZ; // 0x_            
            float m_flBreakAfterTimeThresholdX; // 0x_            
            float m_flBreakAfterTimeThresholdY; // 0x_            
            float m_flBreakAfterTimeThresholdZ; // 0x_            
            float m_flNotifyForceX; // 0x_            
            float m_flNotifyForceY; // 0x_            
            float m_flNotifyForceZ; // 0x_            
            float m_flNotifyForceMinTimeX; // 0x_            
            float m_flNotifyForceMinTimeY; // 0x_            
            float m_flNotifyForceMinTimeZ; // 0x_            
            source2sdk::entity2::GameTime_t m_flNotifyForceLastTimeX; // 0x_            
            source2sdk::entity2::GameTime_t m_flNotifyForceLastTimeY; // 0x_            
            source2sdk::entity2::GameTime_t m_flNotifyForceLastTimeZ; // 0x_            
            bool m_bAxisNotifiedX; // 0x_            
            bool m_bAxisNotifiedY; // 0x_            
            bool m_bAxisNotifiedZ; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::physicslib::JointMotion_t m_nAngularMotionX; // 0x_            
            source2sdk::physicslib::JointMotion_t m_nAngularMotionY; // 0x_            
            source2sdk::physicslib::JointMotion_t m_nAngularMotionZ; // 0x_            
            float m_flAngularFrequencyX; // 0x_            
            float m_flAngularFrequencyY; // 0x_            
            float m_flAngularFrequencyZ; // 0x_            
            float m_flAngularDampingRatioX; // 0x_            
            float m_flAngularDampingRatioY; // 0x_            
            float m_flAngularDampingRatioZ; // 0x_            
            float m_flMaxAngularImpulseX; // 0x_            
            float m_flMaxAngularImpulseY; // 0x_            
            float m_flMaxAngularImpulseZ; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_NotifyForceReachedX; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_NotifyForceReachedY; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_NotifyForceReachedZ; // 0x_            
            
            // Datamap fields:
            // bool InputSetLinearMotionLockedX; // 0x_
            // bool InputSetLinearMotionLockedY; // 0x_
            // bool InputSetLinearMotionLockedZ; // 0x_
            // float InputSetLinearFrequencyX; // 0x_
            // float InputSetLinearFrequencyY; // 0x_
            // float InputSetLinearFrequencyZ; // 0x_
            // float InputSetLinearDampingRatioX; // 0x_
            // float InputSetLinearDampingRatioY; // 0x_
            // float InputSetLinearDampingRatioZ; // 0x_
            // bool InputSetAngularMotionLockedX; // 0x_
            // bool InputSetAngularMotionLockedY; // 0x_
            // bool InputSetAngularMotionLockedZ; // 0x_
            // float InputSetAngularFrequencyX; // 0x_
            // float InputSetAngularFrequencyY; // 0x_
            // float InputSetAngularFrequencyZ; // 0x_
            // float InputSetAngularDampingRatioX; // 0x_
            // float InputSetAngularDampingRatioY; // 0x_
            // float InputSetAngularDampingRatioZ; // 0x_
            // void CGenericConstraintUpdateThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGenericConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGenericConstraint) == 0x_);
    };
};
