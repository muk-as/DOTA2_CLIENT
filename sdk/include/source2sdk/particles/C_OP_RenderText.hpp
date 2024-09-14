#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
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
    // Size: 0x220
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderText : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "outline color"
        Color m_OutlineColor; // 0x210        
        [[maybe_unused]] std::uint8_t pad_0x214[0x4]; // 0x214
        // metadata: MPropertyFriendlyName "default text"
        CUtlString m_DefaultText; // 0x218        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderText because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderText) == 0x220);
};
