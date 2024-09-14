#pragma once
#include "source2sdk/modellib/CModelConfigElement.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
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
    class CModelConfigElement_SetMaterialGroup : public modellib::CModelConfigElement
    {
    public:
        CUtlString m_MaterialGroupName; // 0x48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModelConfigElement_SetMaterialGroup because it is not a standard-layout class
    static_assert(sizeof(CModelConfigElement_SetMaterialGroup) == 0x50);
};
