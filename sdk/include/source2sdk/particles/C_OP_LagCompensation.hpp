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
    // Size: 0x1d0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_LagCompensation : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "desired velocity CP"
        int32_t m_nDesiredVelocityCP; // 0x1c0        
        // metadata: MPropertyFriendlyName "latency CP"
        int32_t m_nLatencyCP; // 0x1c4        
        // metadata: MPropertyFriendlyName "latency CP field"
        int32_t m_nLatencyCPField; // 0x1c8        
        // metadata: MPropertyFriendlyName "desired velocity CP field override(for speed only)"
        int32_t m_nDesiredVelocityCPField; // 0x1cc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_LagCompensation because it is not a standard-layout class
    static_assert(sizeof(C_OP_LagCompensation) == 0x1d0);
};
