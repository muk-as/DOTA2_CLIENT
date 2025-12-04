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
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            std::int32_t m_nCP0; // 0x_            
            // metadata: MPropertyFriendlyName "control point 1"
            std::int32_t m_nCP1; // 0x_            
            // metadata: MPropertyFriendlyName "min distance value"
            float m_flMinInputValue; // 0x_            
            // metadata: MPropertyFriendlyName "max distance value"
            float m_flMaxInputValue; // 0x_            
            // metadata: MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
            bool m_bInfiniteLine; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapDistanceToLineSegmentBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapDistanceToLineSegmentBase) == 0x_);
    };
};
