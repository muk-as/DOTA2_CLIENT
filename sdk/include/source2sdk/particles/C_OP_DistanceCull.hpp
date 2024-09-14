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
    // Size: 0x1d8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_DistanceCull : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "control point"
        int32_t m_nControlPoint; // 0x1c0        
        // metadata: MPropertyFriendlyName "control point offset"
        // metadata: MVectorIsCoordinate
        Vector m_vecPointOffset; // 0x1c4        
        // metadata: MPropertyFriendlyName "cull distance"
        float m_flDistance; // 0x1d0        
        // metadata: MPropertyFriendlyName "cull inside instead of outside"
        bool m_bCullInside; // 0x1d4        
        [[maybe_unused]] std::uint8_t pad_0x1d5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_DistanceCull because it is not a standard-layout class
    static_assert(sizeof(C_OP_DistanceCull) == 0x1d8);
};
