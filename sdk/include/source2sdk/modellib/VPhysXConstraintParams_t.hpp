#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VPhysXConstraintParams_t
        {
        public:
            std::int8_t m_nType; // 0x_            
            std::int8_t m_nTranslateMotion; // 0x_            
            std::int8_t m_nRotateMotion; // 0x_            
            std::int8_t m_nFlags; // 0x_            
            Vector m_anchor[2]; // 0x_            
            QuaternionStorage m_axes[2]; // 0x_            
            float m_maxForce; // 0x_            
            float m_maxTorque; // 0x_            
            float m_linearLimitValue; // 0x_            
            float m_linearLimitRestitution; // 0x_            
            float m_linearLimitSpring; // 0x_            
            float m_linearLimitDamping; // 0x_            
            float m_twistLowLimitValue; // 0x_            
            float m_twistLowLimitRestitution; // 0x_            
            float m_twistLowLimitSpring; // 0x_            
            float m_twistLowLimitDamping; // 0x_            
            float m_twistHighLimitValue; // 0x_            
            float m_twistHighLimitRestitution; // 0x_            
            float m_twistHighLimitSpring; // 0x_            
            float m_twistHighLimitDamping; // 0x_            
            float m_swing1LimitValue; // 0x_            
            float m_swing1LimitRestitution; // 0x_            
            float m_swing1LimitSpring; // 0x_            
            float m_swing1LimitDamping; // 0x_            
            float m_swing2LimitValue; // 0x_            
            float m_swing2LimitRestitution; // 0x_            
            float m_swing2LimitSpring; // 0x_            
            float m_swing2LimitDamping; // 0x_            
            Vector m_goalPosition; // 0x_            
            QuaternionStorage m_goalOrientation; // 0x_            
            Vector m_goalAngularVelocity; // 0x_            
            float m_driveSpringX; // 0x_            
            float m_driveSpringY; // 0x_            
            float m_driveSpringZ; // 0x_            
            float m_driveDampingX; // 0x_            
            float m_driveDampingY; // 0x_            
            float m_driveDampingZ; // 0x_            
            float m_driveSpringTwist; // 0x_            
            float m_driveSpringSwing; // 0x_            
            float m_driveSpringSlerp; // 0x_            
            float m_driveDampingTwist; // 0x_            
            float m_driveDampingSwing; // 0x_            
            float m_driveDampingSlerp; // 0x_            
            std::int32_t m_solverIterationCount; // 0x_            
            float m_projectionLinearTolerance; // 0x_            
            float m_projectionAngularTolerance; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_nType) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_nTranslateMotion) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_nRotateMotion) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_anchor) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_axes) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_maxForce) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_maxTorque) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_linearLimitValue) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_linearLimitRestitution) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_linearLimitSpring) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_linearLimitDamping) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_twistLowLimitValue) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_twistLowLimitRestitution) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_twistLowLimitSpring) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_twistLowLimitDamping) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_twistHighLimitValue) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_twistHighLimitRestitution) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_twistHighLimitSpring) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_twistHighLimitDamping) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_swing1LimitValue) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_swing1LimitRestitution) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_swing1LimitSpring) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_swing1LimitDamping) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_swing2LimitValue) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_swing2LimitRestitution) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_swing2LimitSpring) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_swing2LimitDamping) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_goalPosition) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_goalOrientation) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_goalAngularVelocity) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_driveSpringX) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_driveSpringY) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_driveSpringZ) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_driveDampingX) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_driveDampingY) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_driveDampingZ) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_driveSpringTwist) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_driveSpringSwing) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_driveSpringSlerp) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_driveDampingTwist) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_driveDampingSwing) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_driveDampingSlerp) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_solverIterationCount) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_projectionLinearTolerance) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXConstraintParams_t, m_projectionAngularTolerance) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::VPhysXConstraintParams_t) == 0x_);
    };
};
