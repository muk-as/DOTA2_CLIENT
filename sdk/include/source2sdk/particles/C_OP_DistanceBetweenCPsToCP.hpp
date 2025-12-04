#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleParentSetMode_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"

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
        class C_OP_DistanceBetweenCPsToCP : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "starting control point"
            std::int32_t m_nStartCP; // 0x_            
            // metadata: MPropertyFriendlyName "ending control point"
            std::int32_t m_nEndCP; // 0x_            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOutputCP; // 0x_            
            // metadata: MPropertyFriendlyName "output control point field"
            std::int32_t m_nOutputCPField; // 0x_            
            // metadata: MPropertyFriendlyName "only set distance once"
            bool m_bSetOnce; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "distance minimum"
            float m_flInputMin; // 0x_            
            // metadata: MPropertyFriendlyName "distance maximum"
            float m_flInputMax; // 0x_            
            // metadata: MPropertyFriendlyName "output minimum"
            float m_flOutputMin; // 0x_            
            // metadata: MPropertyFriendlyName "output maximum"
            float m_flOutputMax; // 0x_            
            // metadata: MPropertyFriendlyName "maximum trace length"
            float m_flMaxTraceLength; // 0x_            
            // metadata: MPropertyFriendlyName "LOS Failure Scale"
            float m_flLOSScale; // 0x_            
            // metadata: MPropertyFriendlyName "ensure line of sight"
            bool m_bLOS; // 0x_            
            // metadata: MPropertyFriendlyName "LOS collision group"
            char m_CollisionGroupName[128]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Trace Set"
            source2sdk::particles::ParticleTraceSet_t m_nTraceSet; // 0x_            
            // metadata: MPropertyFriendlyName "set parent"
            source2sdk::particles::ParticleParentSetMode_t m_nSetParent; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_DistanceBetweenCPsToCP because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_DistanceBetweenCPsToCP) == 0x_);
    };
};
