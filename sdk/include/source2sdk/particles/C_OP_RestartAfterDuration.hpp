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
    class C_OP_RestartAfterDuration : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "minimum restart time"
        float m_flDurationMin; // 0x1c0        
        // metadata: MPropertyFriendlyName "maximum restart time"
        float m_flDurationMax; // 0x1c4        
        // metadata: MPropertyFriendlyName "control point to scale duration"
        int32_t m_nCP; // 0x1c8        
        // metadata: MPropertyFriendlyName "control point field X/Y/Z"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nCPField; // 0x1cc        
        // metadata: MPropertyFriendlyName "child group ID"
        int32_t m_nChildGroupID; // 0x1d0        
        // metadata: MPropertyFriendlyName "only restart children"
        bool m_bOnlyChildren; // 0x1d4        
        [[maybe_unused]] std::uint8_t pad_0x1d5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RestartAfterDuration because it is not a standard-layout class
    static_assert(sizeof(C_OP_RestartAfterDuration) == 0x1d8);
};
