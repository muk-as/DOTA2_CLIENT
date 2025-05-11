#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
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
        // Size: 0x210
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_RemapNamedModelElementToScalar : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x8]; // 0x1c8            
            // metadata: MPropertyFriendlyName "names"
            // m_names has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_names;
            char m_names[0x18]; // 0x1d0            
            // metadata: MPropertyFriendlyName "remap values for names"
            // m_values has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_values;
            char m_values[0x18]; // 0x1e8            
            // metadata: MPropertyFriendlyName "input field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldInput; // 0x200            
            // metadata: MPropertyFriendlyName "output field"
            // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
            source2sdk::particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x204            
            // metadata: MPropertyFriendlyName "set value method"
            source2sdk::particles::ParticleSetMethod_t m_nSetMethod; // 0x208            
            // metadata: MPropertyFriendlyName "model from renderer"
            bool m_bModelFromRenderer; // 0x20c            
            uint8_t _pad020d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RemapNamedModelElementToScalar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RemapNamedModelElementToScalar) == 0x210);
    };
};
