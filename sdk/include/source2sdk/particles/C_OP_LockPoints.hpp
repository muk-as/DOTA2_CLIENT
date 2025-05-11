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
        class C_OP_LockPoints : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "min column/particle index to affect"
            std::int32_t m_nMinCol; // 0x1c0            
            // metadata: MPropertyFriendlyName "max column/particle index to affect"
            std::int32_t m_nMaxCol; // 0x1c4            
            // metadata: MPropertyFriendlyName "min row/particle index to affect"
            std::int32_t m_nMinRow; // 0x1c8            
            // metadata: MPropertyFriendlyName "max row/particle index to affect"
            std::int32_t m_nMaxRow; // 0x1cc            
            // metadata: MPropertyFriendlyName "control point to lock to"
            std::int32_t m_nControlPoint; // 0x1d0            
            // metadata: MPropertyFriendlyName "amount of current position to preserve"
            float m_flBlendValue; // 0x1d4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_LockPoints because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_LockPoints) == 0x1d8);
    };
};
