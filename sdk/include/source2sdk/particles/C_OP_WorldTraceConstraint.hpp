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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_WorldTraceConstraint : public source2sdk::particles::CParticleFunctionConstraint
        {
        public:
            // metadata: MPropertyFriendlyName "control point for fast collision tests"
            std::int32_t m_nCP; // 0x_            
            // metadata: MPropertyFriendlyName "control point offset for fast collisions"
            // metadata: MVectorIsCoordinate
            Vector m_vecCpOffset; // 0x_            
            // metadata: MPropertyFriendlyName "collision mode"
            source2sdk::particles::ParticleCollisionMode_t m_nCollisionMode; // 0x_            
            // metadata: MPropertyFriendlyName "minimum detail collision mode"
            source2sdk::particles::ParticleCollisionMode_t m_nCollisionModeMin; // 0x_            
            // metadata: MPropertyStartGroup "Collision Options"
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x_            
            // metadata: MPropertyFriendlyName "collision group"
            char m_CollisionGroupName[128]; // 0x_            
            // metadata: MPropertyFriendlyName "World Only"
            bool m_bWorldOnly; // 0x_            
            // metadata: MPropertyFriendlyName "brush only"
            bool m_bBrushOnly; // 0x_            
            // metadata: MPropertyFriendlyName "include water"
            // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
            bool m_bIncludeWater; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "CP Entity to Ignore for Collisions"
            // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
            std::int32_t m_nIgnoreCP; // 0x_            
            // metadata: MPropertyFriendlyName "control point movement distance tolerance"
            // metadata: MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
            float m_flCpMovementTolerance; // 0x_            
            // metadata: MPropertyFriendlyName "plane cache retest rate"
            // metadata: MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_PER_FRAME_PLANESET"
            float m_flRetestRate; // 0x_            
            // metadata: MPropertyFriendlyName "trace accuracy tolerance"
            // metadata: MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_USE_NEAREST_TRACE"
            float m_flTraceTolerance; // 0x_            
            // metadata: MPropertyFriendlyName "Confirm Collision Speed Threshold"
            // metadata: MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
            float m_flCollisionConfirmationSpeed; // 0x_            
            // metadata: MPropertyFriendlyName "Max Confirmation Traces Per Fame"
            // metadata: MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
            float m_nMaxTracesPerFrame; // 0x_            
            // metadata: MPropertyStartGroup "Impact Options"
            // metadata: MPropertyFriendlyName "radius scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flRadiusScale; // 0x_            
            // metadata: MPropertyFriendlyName "amount of bounce"
            source2sdk::particleslib::CPerParticleFloatInput m_flBounceAmount; // 0x_            
            // metadata: MPropertyFriendlyName "amount of slide"
            source2sdk::particleslib::CPerParticleFloatInput m_flSlideAmount; // 0x_            
            // metadata: MPropertyFriendlyName "Random Direction scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flRandomDirScale; // 0x_            
            // metadata: MPropertyFriendlyName "Add Decay to Bounce"
            bool m_bDecayBounce; // 0x_            
            // metadata: MPropertyFriendlyName "kill particle on collision"
            bool m_bKillonContact; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "minimum speed to kill on collision"
            float m_flMinSpeed; // 0x_            
            // metadata: MPropertyFriendlyName "Set Normal"
            bool m_bSetNormal; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Stick On Collision Cache Field"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x_            
            // metadata: MPropertyFriendlyName "Speed to stop when sticking"
            source2sdk::particleslib::CPerParticleFloatInput m_flStopSpeed; // 0x_            
            // metadata: MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nEntityStickDataField; // 0x_            
            // metadata: MPropertyFriendlyName "Entity Normal Cache Field (Requires Stick on Collision)"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nEntityStickNormalField; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_WorldTraceConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_WorldTraceConstraint) == 0x_);
    };
};
