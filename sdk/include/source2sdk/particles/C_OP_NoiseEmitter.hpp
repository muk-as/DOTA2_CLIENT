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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x208
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_NoiseEmitter : public source2sdk::particles::CParticleFunctionEmitter
        {
        public:
            // metadata: MPropertyFriendlyName "emission duration"
            float m_flEmissionDuration; // 0x1c8            
            // metadata: MPropertyFriendlyName "emission start time"
            float m_flStartTime; // 0x1cc            
            // metadata: MPropertyFriendlyName "scale emission to used control points"
            // metadata: MParticleMaxVersion "1"
            float m_flEmissionScale; // 0x1d0            
            // metadata: MPropertyFriendlyName "emission count scale control point"
            std::int32_t m_nScaleControlPoint; // 0x1d4            
            // metadata: MPropertyFriendlyName "emission count scale control point field"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nScaleControlPointField; // 0x1d8            
            // metadata: MPropertyFriendlyName "world noise scale control point"
            std::int32_t m_nWorldNoisePoint; // 0x1dc            
            // metadata: MPropertyFriendlyName "absolute value"
            bool m_bAbsVal; // 0x1e0            
            // metadata: MPropertyFriendlyName "invert absolute value"
            bool m_bAbsValInv; // 0x1e1            
            uint8_t _pad01e2[0x2]; // 0x1e2
            // metadata: MPropertyFriendlyName "time coordinate offset"
            float m_flOffset; // 0x1e4            
            // metadata: MPropertyFriendlyName "emission minimum"
            float m_flOutputMin; // 0x1e8            
            // metadata: MPropertyFriendlyName "emission maximum"
            float m_flOutputMax; // 0x1ec            
            // metadata: MPropertyFriendlyName "time noise coordinate scale"
            float m_flNoiseScale; // 0x1f0            
            // metadata: MPropertyFriendlyName "world spatial noise coordinate scale"
            float m_flWorldNoiseScale; // 0x1f4            
            // metadata: MPropertyFriendlyName "spatial coordinate offset"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffsetLoc; // 0x1f8            
            // metadata: MPropertyFriendlyName "world time noise coordinate scale"
            float m_flWorldTimeScale; // 0x204            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_NoiseEmitter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_NoiseEmitter) == 0x208);
    };
};
