#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        // Size: 0x220
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_RemapNamedModelElementEndCap : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x8]; // 0x1c0            
            // metadata: MPropertyFriendlyName "input names"
            // m_inNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_inNames;
            char m_inNames[0x18]; // 0x1c8            
            // metadata: MPropertyFriendlyName "output names"
            // m_outNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_outNames;
            char m_outNames[0x18]; // 0x1e0            
            // metadata: MPropertyFriendlyName "fallback names when the input doesn't match"
            // m_fallbackNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_fallbackNames;
            char m_fallbackNames[0x18]; // 0x1f8            
            // metadata: MPropertyFriendlyName "model from renderer"
            bool m_bModelFromRenderer; // 0x210            
            uint8_t _pad0211[0x3]; // 0x211
            // metadata: MPropertyFriendlyName "input field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInput; // 0x214            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x218            
            uint8_t _pad021c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RemapNamedModelElementEndCap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RemapNamedModelElementEndCap) == 0x220);
    };
};
