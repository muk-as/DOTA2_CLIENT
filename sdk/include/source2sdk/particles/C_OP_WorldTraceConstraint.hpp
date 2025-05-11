#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleCollisionMode_t.hpp"
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
        // Size: 0x970
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_WorldTraceConstraint : public source2sdk::particles::CParticleFunctionConstraint
        {
        public:
            // metadata: MPropertyFriendlyName "control point for fast collision tests"
            std::int32_t m_nCP; // 0x1c0            
            // metadata: MPropertyFriendlyName "control point offset for fast collisions"
            // metadata: MVectorIsCoordinate
            Vector m_vecCpOffset; // 0x1c4            
            // metadata: MPropertyFriendlyName "collision mode"
            source2sdk::particles::ParticleCollisionMode_t m_nCollisionMode; // 0x1d0            
            // metadata: MPropertyFriendlyName "minimum detail collision mode"
            source2sdk::particles::ParticleCollisionMode_t m_nCollisionModeMin; // 0x1d4            
            // metadata: MPropertyStartGroup "Collision Options"
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x1d8            
            // metadata: MPropertyFriendlyName "collision group"
            char m_CollisionGroupName[128]; // 0x1dc            
            // metadata: MPropertyFriendlyName "World Only"
            bool m_bWorldOnly; // 0x25c            
            // metadata: MPropertyFriendlyName "brush only"
            bool m_bBrushOnly; // 0x25d            
            // metadata: MPropertyFriendlyName "include water"
            // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
            bool m_bIncludeWater; // 0x25e            
            uint8_t _pad025f[0x1]; // 0x25f
            // metadata: MPropertyFriendlyName "CP Entity to Ignore for Collisions"
            // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
            std::int32_t m_nIgnoreCP; // 0x260            
            // metadata: MPropertyFriendlyName "control point movement distance tolerance"
            // metadata: MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
            float m_flCpMovementTolerance; // 0x264            
            // metadata: MPropertyFriendlyName "plane cache retest rate"
            // metadata: MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_PER_FRAME_PLANESET"
            float m_flRetestRate; // 0x268            
            // metadata: MPropertyFriendlyName "trace accuracy tolerance"
            // metadata: MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_USE_NEAREST_TRACE"
            float m_flTraceTolerance; // 0x26c            
            // metadata: MPropertyFriendlyName "Confirm Collision Speed Threshold"
            // metadata: MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
            float m_flCollisionConfirmationSpeed; // 0x270            
            // metadata: MPropertyFriendlyName "Max Confirmation Traces Per Fame"
            // metadata: MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
            float m_nMaxTracesPerFrame; // 0x274            
            // metadata: MPropertyStartGroup "Impact Options"
            // metadata: MPropertyFriendlyName "radius scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flRadiusScale; // 0x278            
            // metadata: MPropertyFriendlyName "amount of bounce"
            source2sdk::particleslib::CPerParticleFloatInput m_flBounceAmount; // 0x3d8            
            // metadata: MPropertyFriendlyName "amount of slide"
            source2sdk::particleslib::CPerParticleFloatInput m_flSlideAmount; // 0x538            
            // metadata: MPropertyFriendlyName "Random Direction scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flRandomDirScale; // 0x698            
            // metadata: MPropertyFriendlyName "Add Decay to Bounce"
            bool m_bDecayBounce; // 0x7f8            
            // metadata: MPropertyFriendlyName "kill particle on collision"
            bool m_bKillonContact; // 0x7f9            
            uint8_t _pad07fa[0x2]; // 0x7fa
            // metadata: MPropertyFriendlyName "minimum speed to kill on collision"
            float m_flMinSpeed; // 0x7fc            
            // metadata: MPropertyFriendlyName "Set Normal"
            bool m_bSetNormal; // 0x800            
            uint8_t _pad0801[0x3]; // 0x801
            // metadata: MPropertyFriendlyName "Stick On Collision Cache Field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x804            
            // metadata: MPropertyFriendlyName "Speed to stop when sticking"
            source2sdk::particleslib::CPerParticleFloatInput m_flStopSpeed; // 0x808            
            // metadata: MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nEntityStickDataField; // 0x968            
            // metadata: MPropertyFriendlyName "Entity Normal Cache Field (Requires Stick on Collision)"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nEntityStickNormalField; // 0x96c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_WorldTraceConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_WorldTraceConstraint) == 0x970);
    };
};
