#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
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
        class CFeJiggleBone
        {
        public:
            std::uint32_t m_nFlags; // 0x_            
            float m_flLength; // 0x_            
            float m_flTipMass; // 0x_            
            float m_flYawStiffness; // 0x_            
            float m_flYawDamping; // 0x_            
            float m_flPitchStiffness; // 0x_            
            float m_flPitchDamping; // 0x_            
            float m_flAlongStiffness; // 0x_            
            float m_flAlongDamping; // 0x_            
            float m_flAngleLimit; // 0x_            
            float m_flMinYaw; // 0x_            
            float m_flMaxYaw; // 0x_            
            float m_flYawFriction; // 0x_            
            float m_flYawBounce; // 0x_            
            float m_flMinPitch; // 0x_            
            float m_flMaxPitch; // 0x_            
            float m_flPitchFriction; // 0x_            
            float m_flPitchBounce; // 0x_            
            float m_flBaseMass; // 0x_            
            float m_flBaseStiffness; // 0x_            
            float m_flBaseDamping; // 0x_            
            float m_flBaseMinLeft; // 0x_            
            float m_flBaseMaxLeft; // 0x_            
            float m_flBaseLeftFriction; // 0x_            
            float m_flBaseMinUp; // 0x_            
            float m_flBaseMaxUp; // 0x_            
            float m_flBaseUpFriction; // 0x_            
            float m_flBaseMinForward; // 0x_            
            float m_flBaseMaxForward; // 0x_            
            float m_flBaseForwardFriction; // 0x_            
            float m_flRadius0; // 0x_            
            float m_flRadius1; // 0x_            
            Vector m_vPoint0; // 0x_            
            Vector m_vPoint1; // 0x_            
            std::uint16_t m_nCollisionMask; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flLength) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flTipMass) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flYawStiffness) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flYawDamping) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flPitchStiffness) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flPitchDamping) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flAlongStiffness) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flAlongDamping) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flAngleLimit) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flMinYaw) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flMaxYaw) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flYawFriction) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flYawBounce) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flMinPitch) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flMaxPitch) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flPitchFriction) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flPitchBounce) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flBaseMass) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flBaseStiffness) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flBaseDamping) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flBaseMinLeft) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flBaseMaxLeft) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flBaseLeftFriction) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flBaseMinUp) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flBaseMaxUp) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flBaseUpFriction) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flBaseMinForward) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flBaseMaxForward) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flBaseForwardFriction) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flRadius0) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_flRadius1) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_vPoint0) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_vPoint1) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CFeJiggleBone, m_nCollisionMask) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::CFeJiggleBone) == 0x_);
    };
};
