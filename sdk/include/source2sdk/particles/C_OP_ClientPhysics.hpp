#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"

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
        // Size: 0x4f8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ClientPhysics : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "client physics type"
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata!generic_physics_particle_spawner )"
            CUtlString m_strPhysicsType; // 0x210            
            // metadata: MPropertyFriendlyName "start all physics asleep"
            bool m_bStartAsleep; // 0x218            
            uint8_t _pad0219[0x7]; // 0x219
            // metadata: MPropertyFriendlyName "Player Wake Radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flPlayerWakeRadius; // 0x220            
            // metadata: MPropertyFriendlyName "Vehicle Wake Radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flVehicleWakeRadius; // 0x380            
            // metadata: MPropertyFriendlyName "use high quality simulation"
            bool m_bUseHighQualitySimulation; // 0x4e0            
            uint8_t _pad04e1[0x3]; // 0x4e1
            // metadata: MPropertyFriendlyName "max particle count"
            std::int32_t m_nMaxParticleCount; // 0x4e4            
            // metadata: MPropertyFriendlyName "prevent spawning in exclusion volumes"
            // metadata: MPropertySuppressExpr "m_bKillParticles == true"
            bool m_bRespectExclusionVolumes; // 0x4e8            
            // metadata: MPropertyFriendlyName "kill physics particles"
            bool m_bKillParticles; // 0x4e9            
            // metadata: MPropertyFriendlyName "delete physics sim when stopped"
            // metadata: MPropertySuppressExpr "m_bKillParticles == false"
            bool m_bDeleteSim; // 0x4ea            
            uint8_t _pad04eb[0x1]; // 0x4eb
            // metadata: MPropertyFriendlyName "control point (for finding nearest sim)"
            // metadata: MPropertySuppressExpr "m_bKillParticles == true"
            std::int32_t m_nControlPoint; // 0x4ec            
            // metadata: MPropertyFriendlyName "tint blend (color vs prop group gradient)"
            source2sdk::particles::ParticleColorBlendType_t m_nColorBlendType; // 0x4f0            
            uint8_t _pad04f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ClientPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ClientPhysics) == 0x4f8);
    };
};
