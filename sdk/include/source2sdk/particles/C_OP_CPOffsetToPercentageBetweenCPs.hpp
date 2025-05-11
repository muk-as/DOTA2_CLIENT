#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"

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
        // Size: 0x1f0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_CPOffsetToPercentageBetweenCPs : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "percentage minimum"
            float m_flInputMin; // 0x1c0            
            // metadata: MPropertyFriendlyName "percentage maximum"
            float m_flInputMax; // 0x1c4            
            // metadata: MPropertyFriendlyName "percentage bias"
            float m_flInputBias; // 0x1c8            
            // metadata: MPropertyFriendlyName "starting control point"
            std::int32_t m_nStartCP; // 0x1cc            
            // metadata: MPropertyFriendlyName "ending control point"
            std::int32_t m_nEndCP; // 0x1d0            
            // metadata: MPropertyFriendlyName "offset control point"
            std::int32_t m_nOffsetCP; // 0x1d4            
            // metadata: MPropertyFriendlyName "output control point"
            std::int32_t m_nOuputCP; // 0x1d8            
            // metadata: MPropertyFriendlyName "input control point"
            std::int32_t m_nInputCP; // 0x1dc            
            // metadata: MPropertyFriendlyName "treat distance between points as radius"
            bool m_bRadialCheck; // 0x1e0            
            // metadata: MPropertyFriendlyName "treat offset as scale of total distance"
            bool m_bScaleOffset; // 0x1e1            
            uint8_t _pad01e2[0x2]; // 0x1e2
            // metadata: MPropertyFriendlyName "offset amount"
            // metadata: MVectorIsCoordinate
            Vector m_vecOffset; // 0x1e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_CPOffsetToPercentageBetweenCPs because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_CPOffsetToPercentageBetweenCPs) == 0x1f0);
    };
};
