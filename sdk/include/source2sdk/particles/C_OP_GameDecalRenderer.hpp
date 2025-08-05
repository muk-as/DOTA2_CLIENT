#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/EventTypeSelection_t.hpp"
#include "source2sdk/particles/ParticleCollisionGroup_t.hpp"
#include "source2sdk/particles/ParticleCollisionMask_t.hpp"
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
        // Size: 0x19c0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_GameDecalRenderer : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "decal name"
            // metadata: MPropertyAttributeEditor "VDataChoice( scripts/decalgroups.vdata )"
            CGlobalSymbol m_sDecalGroupName; // 0x210            
            // metadata: MPropertyFriendlyName "event type"
            source2sdk::particles::EventTypeSelection_t m_nEventType; // 0x218            
            uint8_t _pad021c[0x4]; // 0x21c
            // metadata: MPropertyFriendlyName "Collision Interaction Mask"
            source2sdk::particles::ParticleCollisionMask_t m_nInteractionMask; // 0x220            
            // metadata: MPropertyFriendlyName "Collision Group"
            source2sdk::particles::ParticleCollisionGroup_t m_nCollisionGroup; // 0x228            
            uint8_t _pad022c[0x4]; // 0x22c
            // metadata: MPropertyFriendlyName "Trace Start Position"
            source2sdk::particleslib::CPerParticleVecInput m_vecStartPos; // 0x230            
            // metadata: MPropertyFriendlyName "Trace End Position"
            source2sdk::particleslib::CPerParticleVecInput m_vecEndPos; // 0x8a8            
            // metadata: MPropertyFriendlyName "Trace Bloat Radius Scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flTraceBloat; // 0xf20            
            // metadata: MPropertyFriendlyName "Decal Size"
            // metadata: MPropertySuppressExpr "m_bUseGameDefaultDecalSize == true"
            source2sdk::particleslib::CPerParticleFloatInput m_flDecalSize; // 0x1080            
            // metadata: MPropertyFriendlyName "Decal Group Choice Index"
            // metadata: MPropertySuppressExpr "m_bRandomlySelectDecalInGroup == false"
            source2sdk::particleslib::CPerParticleFloatInput m_nDecalSequenceIndex; // 0x11e0            
            // metadata: MPropertyFriendlyName "Decal Modulation Color"
            source2sdk::particleslib::CPerParticleVecInput m_vModulationColor; // 0x1340            
            // metadata: MPropertyFriendlyName "Use Game's Default Decal Size"
            bool m_bUseGameDefaultDecalSize; // 0x19b8            
            // metadata: MPropertyFriendlyName "Randomly Select Decal in Decal Group"
            bool m_bRandomlySelectDecalInGroup; // 0x19b9            
            // metadata: MPropertyFriendlyName "Debug Traces"
            bool m_bVisualizeTraces; // 0x19ba            
            uint8_t _pad19bb[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_GameDecalRenderer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_GameDecalRenderer) == 0x19c0);
    };
};
