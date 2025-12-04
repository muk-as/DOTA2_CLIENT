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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_PositionPlaceOnGround : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "offset"
            source2sdk::particleslib::CPerParticleFloatInput m_flOffset; // 0x_            
            // metadata: MPropertyFriendlyName "max trace length"
            source2sdk::particleslib::CPerParticleFloatInput m_flMaxTraceLength; // 0x_            
            // metadata: MPropertyFriendlyName "collision group"
            char m_CollisionGroupName[128]; // 0x_            
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "No Collision Behavior"
            source2sdk::particles::ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x_            
            // metadata: MPropertyFriendlyName "include water"
            // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
            bool m_bIncludeWater; // 0x_            
            // metadata: MPropertyFriendlyName "set normal"
            bool m_bSetNormal; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Attribute to Set"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            source2sdk::particles::ParticleAttributeIndex_t m_nAttribute; // 0x_            
            // metadata: MPropertyFriendlyName "set Previous XYZ only"
            // metadata: MPropertySuppressExpr "m_nAttribute != PARTICLE_ATTRIBUTE_XYZ"
            bool m_bSetPXYZOnly; // 0x_            
            // metadata: MPropertyFriendlyName "Trace along particle normal"
            bool m_bTraceAlongNormal; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Attribute for Trace Direction"
            // metadata: MPropertyAttributeChoiceName "particlefield_vector"
            // metadata: MPropertySuppressExpr "!m_bTraceAlongNormal"
            source2sdk::particles::ParticleAttributeIndex_t m_nTraceDirectionAttribute; // 0x_            
            // metadata: MPropertyFriendlyName "Offset only if trace hit"
            bool m_bOffsetonColOnly; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "offset final position by this fraction of the particle radius"
            float m_flOffsetByRadiusFactor; // 0x_            
            // metadata: MPropertyFriendlyName "preserve initial Z-offset relative to cp"
            std::int32_t m_nPreserveOffsetCP; // 0x_            
            // metadata: MPropertyFriendlyName "CP Entity to Ignore for Collisions"
            // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
            std::int32_t m_nIgnoreCP; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_PositionPlaceOnGround because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_PositionPlaceOnGround) == 0x_);
    };
};
