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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            CGlobalSymbol m_sDecalGroupName; // 0x_            
            // metadata: MPropertyFriendlyName "event type"
            source2sdk::particles::EventTypeSelection_t m_nEventType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Collision Interaction Mask"
            source2sdk::particles::ParticleCollisionMask_t m_nInteractionMask; // 0x_            
            // metadata: MPropertyFriendlyName "Collision Group"
            source2sdk::particles::ParticleCollisionGroup_t m_nCollisionGroup; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Trace Start Position"
            source2sdk::particleslib::CPerParticleVecInput m_vecStartPos; // 0x_            
            // metadata: MPropertyFriendlyName "Trace End Position"
            source2sdk::particleslib::CPerParticleVecInput m_vecEndPos; // 0x_            
            // metadata: MPropertyFriendlyName "Trace Bloat Radius Scale"
            source2sdk::particleslib::CPerParticleFloatInput m_flTraceBloat; // 0x_            
            // metadata: MPropertyFriendlyName "Decal Size"
            // metadata: MPropertySuppressExpr "m_bUseGameDefaultDecalSize == true"
            source2sdk::particleslib::CPerParticleFloatInput m_flDecalSize; // 0x_            
            // metadata: MPropertyFriendlyName "Decal Group Choice Index"
            // metadata: MPropertySuppressExpr "m_bRandomlySelectDecalInGroup == false"
            source2sdk::particleslib::CPerParticleFloatInput m_nDecalSequenceIndex; // 0x_            
            // metadata: MPropertyFriendlyName "Decal Modulation Color"
            source2sdk::particleslib::CPerParticleVecInput m_vModulationColor; // 0x_            
            // metadata: MPropertyFriendlyName "Use Game's Default Decal Size"
            bool m_bUseGameDefaultDecalSize; // 0x_            
            // metadata: MPropertyFriendlyName "Randomly Select Decal in Decal Group"
            bool m_bRandomlySelectDecalInGroup; // 0x_            
            // metadata: MPropertyFriendlyName "Debug Traces"
            bool m_bVisualizeTraces; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_GameDecalRenderer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_GameDecalRenderer) == 0x_);
    };
};
