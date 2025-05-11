#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1e80
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ExternalWindForce : public source2sdk::particles::CParticleFunctionForce
        {
        public:
            // metadata: MPropertyFriendlyName "sample position"
            source2sdk::particleslib::CPerParticleVecInput m_vecSamplePosition; // 0x1d0            
            // metadata: MPropertyFriendlyName "force scale"
            source2sdk::particleslib::CPerParticleVecInput m_vecScale; // 0x848            
            // metadata: MPropertyFriendlyName "sample wind"
            bool m_bSampleWind; // 0xec0            
            // metadata: MPropertyFriendlyName "sample water current"
            bool m_bSampleWater; // 0xec1            
            // metadata: MPropertyFriendlyName "dampen gravity/buoyancy near water plane"
            // metadata: MPropertySuppressExpr "!m_bSampleWater"
            bool m_bDampenNearWaterPlane; // 0xec2            
            // metadata: MPropertyFriendlyName "sample local gravity"
            bool m_bSampleGravity; // 0xec3            
            uint8_t _pad0ec4[0x4]; // 0xec4
            // metadata: MPropertyFriendlyName "gravity force"
            // metadata: MPropertySuppressExpr "m_bSampleGravity"
            source2sdk::particleslib::CPerParticleVecInput m_vecGravityForce; // 0xec8            
            // metadata: MPropertyFriendlyName "use Movement Basic for Local Gravity & Buoyancy Scale"
            // metadata: MPropertySuppressExpr "!m_bSampleGravity"
            bool m_bUseBasicMovementGravity; // 0x1540            
            uint8_t _pad1541[0x7]; // 0x1541
            // metadata: MPropertyFriendlyName "local gravity scale"
            // metadata: MPropertySuppressExpr "!m_bSampleGravity"
            source2sdk::particleslib::CPerParticleFloatInput m_flLocalGravityScale; // 0x1548            
            // metadata: MPropertyFriendlyName "local gravity buoyancy scale"
            // metadata: MPropertySuppressExpr "!m_bSampleGravity"
            source2sdk::particleslib::CPerParticleFloatInput m_flLocalBuoyancyScale; // 0x16a8            
            // metadata: MPropertyFriendlyName "buoyancy force"
            // metadata: MPropertySuppressExpr "!m_bSampleWater || m_bSampleGravity"
            source2sdk::particleslib::CPerParticleVecInput m_vecBuoyancyForce; // 0x1808            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ExternalWindForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ExternalWindForce) == 0x1e80);
    };
};
