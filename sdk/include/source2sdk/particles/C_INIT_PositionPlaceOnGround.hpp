#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleTraceMissBehavior_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"

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
        // Size: 0x540
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_PositionPlaceOnGround : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "offset"
            source2sdk::particleslib::CPerParticleFloatInput m_flOffset; // 0x1c8            
            // metadata: MPropertyFriendlyName "max trace length"
            source2sdk::particleslib::CPerParticleFloatInput m_flMaxTraceLength; // 0x328            
            // metadata: MPropertyFriendlyName "collision group"
            char m_CollisionGroupName[128]; // 0x488            
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x508            
            uint8_t _pad050c[0xc]; // 0x50c
            // metadata: MPropertyFriendlyName "No Collision Behavior"
            source2sdk::particles::ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x518            
            // metadata: MPropertyFriendlyName "include water"
            // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
            bool m_bIncludeWater; // 0x51c            
            // metadata: MPropertyFriendlyName "set normal"
            bool m_bSetNormal; // 0x51d            
            uint8_t _pad051e[0x2]; // 0x51e
            // metadata: MPropertyFriendlyName "Attribute to Set"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttribute; // 0x520            
            // metadata: MPropertyFriendlyName "set Previous XYZ only"
            // metadata: MPropertySuppressExpr "m_nAttribute != PARTICLE_ATTRIBUTE_XYZ"
            bool m_bSetPXYZOnly; // 0x524            
            // metadata: MPropertyFriendlyName "Trace along particle normal"
            bool m_bTraceAlongNormal; // 0x525            
            uint8_t _pad0526[0x2]; // 0x526
            // metadata: MPropertyFriendlyName "Attribute for Trace Direction"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            // metadata: MPropertySuppressExpr "!m_bTraceAlongNormal"
            source2sdk::particles::ParticleAttributeIndex_t m_nTraceDirectionAttribute; // 0x528            
            // metadata: MPropertyFriendlyName "Offset only if trace hit"
            bool m_bOffsetonColOnly; // 0x52c            
            uint8_t _pad052d[0x3]; // 0x52d
            // metadata: MPropertyFriendlyName "offset final position by this fraction of the particle radius"
            float m_flOffsetByRadiusFactor; // 0x530            
            // metadata: MPropertyFriendlyName "preserve initial Z-offset relative to cp"
            std::int32_t m_nPreserveOffsetCP; // 0x534            
            // metadata: MPropertyFriendlyName "CP Entity to Ignore for Collisions"
            // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
            std::int32_t m_nIgnoreCP; // 0x538            
            uint8_t _pad053c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_PositionPlaceOnGround because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_PositionPlaceOnGround) == 0x540);
    };
};
