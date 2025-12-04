#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionEmitter.hpp"

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
        class C_OP_NoiseEmitter : public source2sdk::particles::CParticleFunctionEmitter
        {
        public:
            // metadata: MPropertyFriendlyName "emission duration"
            float m_flEmissionDuration; // 0x_            
            // metadata: MPropertyFriendlyName "emission start time"
            float m_flStartTime; // 0x_            
            // metadata: MPropertyFriendlyName "scale emission to used control points"
            // metadata: MParticleMaxVersion "1"
            float m_flEmissionScale; // 0x_            
            // metadata: MPropertyFriendlyName "emission count scale control point"
            std::int32_t m_nScaleControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "emission count scale control point field"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nScaleControlPointField; // 0x_            
            // metadata: MPropertyFriendlyName "world noise scale control point"
            std::int32_t m_nWorldNoisePoint; // 0x_            
            // metadata: MPropertyFriendlyName "absolute value"
            bool m_bAbsVal; // 0x_            
            // metadata: MPropertyFriendlyName "invert absolute value"
            bool m_bAbsValInv; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "time coordinate offset"
            float m_flOffset; // 0x_            
            // metadata: MPropertyFriendlyName "emission minimum"
            float m_flOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "emission maximum"
            float m_flOutputMax; // 0x_            
            // metadata: MPropertyFriendlyName "time noise coordinate scale"
            float m_flNoiseScale; // 0x_            
            // metadata: MPropertyFriendlyName "world spatial noise coordinate scale"
            float m_flWorldNoiseScale; // 0x_            
            // metadata: MPropertyFriendlyName "spatial coordinate offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffsetLoc; // 0x_            
            // metadata: MPropertyFriendlyName "world time noise coordinate scale"
            float m_flWorldTimeScale; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_NoiseEmitter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_NoiseEmitter) == 0x_);
    };
};
