#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/VPhysXRange_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VPhysXJoint_t
        {
        public:
            std::uint16_t m_nType; // 0x_            
            std::uint16_t m_nBody1; // 0x_            
            std::uint16_t m_nBody2; // 0x_            
            std::uint16_t m_nFlags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CTransform m_Frame1; // 0x_            
            CTransform m_Frame2; // 0x_            
            bool m_bEnableCollision; // 0x_            
            bool m_bIsLinearConstraintDisabled; // 0x_            
            bool m_bIsAngularConstraintDisabled; // 0x_            
            bool m_bEnableLinearLimit; // 0x_            
            source2sdk::modellib::VPhysXRange_t m_LinearLimit; // 0x_            
            bool m_bEnableLinearMotor; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vLinearTargetVelocity; // 0x_            
            float m_flMaxForce; // 0x_            
            bool m_bEnableSwingLimit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::modellib::VPhysXRange_t m_SwingLimit; // 0x_            
            bool m_bEnableTwistLimit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::modellib::VPhysXRange_t m_TwistLimit; // 0x_            
            bool m_bEnableAngularMotor; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vAngularTargetVelocity; // 0x_            
            float m_flMaxTorque; // 0x_            
            float m_flLinearFrequency; // 0x_            
            float m_flLinearDampingRatio; // 0x_            
            float m_flAngularFrequency; // 0x_            
            float m_flAngularDampingRatio; // 0x_            
            float m_flFriction; // 0x_            
            float m_flElasticity; // 0x_            
            float m_flElasticDamping; // 0x_            
            float m_flPlasticity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_Tag; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_nType) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_nBody1) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_nBody2) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_Frame1) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_Frame2) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bEnableCollision) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bIsLinearConstraintDisabled) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bIsAngularConstraintDisabled) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bEnableLinearLimit) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_LinearLimit) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bEnableLinearMotor) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_vLinearTargetVelocity) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flMaxForce) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bEnableSwingLimit) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_SwingLimit) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bEnableTwistLimit) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_TwistLimit) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_bEnableAngularMotor) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_vAngularTargetVelocity) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flMaxTorque) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flLinearFrequency) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flLinearDampingRatio) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flAngularFrequency) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flAngularDampingRatio) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flFriction) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flElasticity) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flElasticDamping) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_flPlasticity) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXJoint_t, m_Tag) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::VPhysXJoint_t) == 0x_);
    };
};
