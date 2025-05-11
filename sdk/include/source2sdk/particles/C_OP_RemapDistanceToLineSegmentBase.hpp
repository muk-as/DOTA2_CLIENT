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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1d8
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapDistanceToLineSegmentBase : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "control point 0"
            std::int32_t m_nCP0; // 0x1c0            
            // metadata: MPropertyFriendlyName "control point 1"
            std::int32_t m_nCP1; // 0x1c4            
            // metadata: MPropertyFriendlyName "min distance value"
            float m_flMinInputValue; // 0x1c8            
            // metadata: MPropertyFriendlyName "max distance value"
            float m_flMaxInputValue; // 0x1cc            
            // metadata: MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
            bool m_bInfiniteLine; // 0x1d0            
            uint8_t _pad01d1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapDistanceToLineSegmentBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapDistanceToLineSegmentBase) == 0x1d8);
    };
};
