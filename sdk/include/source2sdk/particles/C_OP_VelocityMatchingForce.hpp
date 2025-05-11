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
        // Size: 0x1d8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_VelocityMatchingForce : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "direction matching strength"
            float m_flDirScale; // 0x1c0            
            // metadata: MPropertyFriendlyName "speed matching strength"
            float m_flSpdScale; // 0x1c4            
            // metadata: MPropertyFriendlyName "neighbor distance"
            float m_flNeighborDistance; // 0x1c8            
            // metadata: MPropertyFriendlyName "facing strength falloff"
            float m_flFacingStrength; // 0x1cc            
            // metadata: MPropertyFriendlyName "use AABB"
            // metadata: MPropertySuppressExpr "m_flNeighborDistance > 0"
            bool m_bUseAABB; // 0x1d0            
            uint8_t _pad01d1[0x3]; // 0x1d1
            // metadata: MPropertyFriendlyName "control point to broadcast speed and direction to"
            std::int32_t m_nCPBroadcast; // 0x1d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_VelocityMatchingForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_VelocityMatchingForce) == 0x1d8);
    };
};
