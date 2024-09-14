#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1c8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_GlobalLight : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "initial color bias"
        float m_flScale; // 0x1c0        
        // metadata: MPropertyFriendlyName "clamp minimum light value to initial color"
        bool m_bClampLowerRange; // 0x1c4        
        // metadata: MPropertyFriendlyName "clamp maximum light value to initial color"
        bool m_bClampUpperRange; // 0x1c5        
        [[maybe_unused]] std::uint8_t pad_0x1c6[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_GlobalLight because it is not a standard-layout class
    static_assert(sizeof(C_OP_GlobalLight) == 0x1c8);
};
