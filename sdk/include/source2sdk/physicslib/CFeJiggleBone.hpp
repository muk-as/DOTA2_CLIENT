#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x9c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFeJiggleBone
    {
    public:
        uint32_t m_nFlags; // 0x0        
        float m_flLength; // 0x4        
        float m_flTipMass; // 0x8        
        float m_flYawStiffness; // 0xc        
        float m_flYawDamping; // 0x10        
        float m_flPitchStiffness; // 0x14        
        float m_flPitchDamping; // 0x18        
        float m_flAlongStiffness; // 0x1c        
        float m_flAlongDamping; // 0x20        
        float m_flAngleLimit; // 0x24        
        float m_flMinYaw; // 0x28        
        float m_flMaxYaw; // 0x2c        
        float m_flYawFriction; // 0x30        
        float m_flYawBounce; // 0x34        
        float m_flMinPitch; // 0x38        
        float m_flMaxPitch; // 0x3c        
        float m_flPitchFriction; // 0x40        
        float m_flPitchBounce; // 0x44        
        float m_flBaseMass; // 0x48        
        float m_flBaseStiffness; // 0x4c        
        float m_flBaseDamping; // 0x50        
        float m_flBaseMinLeft; // 0x54        
        float m_flBaseMaxLeft; // 0x58        
        float m_flBaseLeftFriction; // 0x5c        
        float m_flBaseMinUp; // 0x60        
        float m_flBaseMaxUp; // 0x64        
        float m_flBaseUpFriction; // 0x68        
        float m_flBaseMinForward; // 0x6c        
        float m_flBaseMaxForward; // 0x70        
        float m_flBaseForwardFriction; // 0x74        
        float m_flRadius0; // 0x78        
        float m_flRadius1; // 0x7c        
        Vector m_vPoint0; // 0x80        
        Vector m_vPoint1; // 0x8c        
        uint16_t m_nCollisionMask; // 0x98        
        [[maybe_unused]] std::uint8_t pad_0x9a[0x2];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CFeJiggleBone, m_nFlags) == 0x0);
    static_assert(offsetof(CFeJiggleBone, m_flLength) == 0x4);
    static_assert(offsetof(CFeJiggleBone, m_flTipMass) == 0x8);
    static_assert(offsetof(CFeJiggleBone, m_flYawStiffness) == 0xc);
    static_assert(offsetof(CFeJiggleBone, m_flYawDamping) == 0x10);
    static_assert(offsetof(CFeJiggleBone, m_flPitchStiffness) == 0x14);
    static_assert(offsetof(CFeJiggleBone, m_flPitchDamping) == 0x18);
    static_assert(offsetof(CFeJiggleBone, m_flAlongStiffness) == 0x1c);
    static_assert(offsetof(CFeJiggleBone, m_flAlongDamping) == 0x20);
    static_assert(offsetof(CFeJiggleBone, m_flAngleLimit) == 0x24);
    static_assert(offsetof(CFeJiggleBone, m_flMinYaw) == 0x28);
    static_assert(offsetof(CFeJiggleBone, m_flMaxYaw) == 0x2c);
    static_assert(offsetof(CFeJiggleBone, m_flYawFriction) == 0x30);
    static_assert(offsetof(CFeJiggleBone, m_flYawBounce) == 0x34);
    static_assert(offsetof(CFeJiggleBone, m_flMinPitch) == 0x38);
    static_assert(offsetof(CFeJiggleBone, m_flMaxPitch) == 0x3c);
    static_assert(offsetof(CFeJiggleBone, m_flPitchFriction) == 0x40);
    static_assert(offsetof(CFeJiggleBone, m_flPitchBounce) == 0x44);
    static_assert(offsetof(CFeJiggleBone, m_flBaseMass) == 0x48);
    static_assert(offsetof(CFeJiggleBone, m_flBaseStiffness) == 0x4c);
    static_assert(offsetof(CFeJiggleBone, m_flBaseDamping) == 0x50);
    static_assert(offsetof(CFeJiggleBone, m_flBaseMinLeft) == 0x54);
    static_assert(offsetof(CFeJiggleBone, m_flBaseMaxLeft) == 0x58);
    static_assert(offsetof(CFeJiggleBone, m_flBaseLeftFriction) == 0x5c);
    static_assert(offsetof(CFeJiggleBone, m_flBaseMinUp) == 0x60);
    static_assert(offsetof(CFeJiggleBone, m_flBaseMaxUp) == 0x64);
    static_assert(offsetof(CFeJiggleBone, m_flBaseUpFriction) == 0x68);
    static_assert(offsetof(CFeJiggleBone, m_flBaseMinForward) == 0x6c);
    static_assert(offsetof(CFeJiggleBone, m_flBaseMaxForward) == 0x70);
    static_assert(offsetof(CFeJiggleBone, m_flBaseForwardFriction) == 0x74);
    static_assert(offsetof(CFeJiggleBone, m_flRadius0) == 0x78);
    static_assert(offsetof(CFeJiggleBone, m_flRadius1) == 0x7c);
    static_assert(offsetof(CFeJiggleBone, m_vPoint0) == 0x80);
    static_assert(offsetof(CFeJiggleBone, m_vPoint1) == 0x8c);
    static_assert(offsetof(CFeJiggleBone, m_nCollisionMask) == 0x98);
    
    static_assert(sizeof(CFeJiggleBone) == 0x9c);
};
