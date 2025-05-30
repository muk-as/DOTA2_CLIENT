#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CModelConfigElement.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x50
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModelConfigElement_SetMaterialGroupOnAttachedModels : public source2sdk::modellib::CModelConfigElement
        {
        public:
            CUtlString m_MaterialGroupName; // 0x48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModelConfigElement_SetMaterialGroupOnAttachedModels because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CModelConfigElement_SetMaterialGroupOnAttachedModels) == 0x50);
    };
};
