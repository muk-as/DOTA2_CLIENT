#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"

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
        // Size: 0x220
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RenderText : public source2sdk::particles::CParticleFunctionRenderer
        {
        public:
            // metadata: MPropertyFriendlyName "outline color"
            Color m_OutlineColor; // 0x210            
            uint8_t _pad0214[0x4]; // 0x214
            // metadata: MPropertyFriendlyName "default text"
            CUtlString m_DefaultText; // 0x218            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RenderText because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RenderText) == 0x220);
    };
};
