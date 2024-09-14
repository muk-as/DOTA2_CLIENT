#pragma once
#include "source2sdk/materialsystem2/MaterialParamBuffer_t.hpp"
#include "source2sdk/materialsystem2/MaterialParamFloat_t.hpp"
#include "source2sdk/materialsystem2/MaterialParamInt_t.hpp"
#include "source2sdk/materialsystem2/MaterialParamString_t.hpp"
#include "source2sdk/materialsystem2/MaterialParamTexture_t.hpp"
#include "source2sdk/materialsystem2/MaterialParamVector_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x130
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct MaterialResourceData_t
    {
    public:
        CUtlString m_materialName; // 0x0        
        CUtlString m_shaderName; // 0x8        
        // m_intParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<materialsystem2::MaterialParamInt_t> m_intParams;
        char m_intParams[0x18]; // 0x10        
        // m_floatParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<materialsystem2::MaterialParamFloat_t> m_floatParams;
        char m_floatParams[0x18]; // 0x28        
        // m_vectorParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<materialsystem2::MaterialParamVector_t> m_vectorParams;
        char m_vectorParams[0x18]; // 0x40        
        // m_textureParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<materialsystem2::MaterialParamTexture_t> m_textureParams;
        char m_textureParams[0x18]; // 0x58        
        // m_dynamicParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<materialsystem2::MaterialParamBuffer_t> m_dynamicParams;
        char m_dynamicParams[0x18]; // 0x70        
        // m_dynamicTextureParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<materialsystem2::MaterialParamBuffer_t> m_dynamicTextureParams;
        char m_dynamicTextureParams[0x18]; // 0x88        
        // m_intAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<materialsystem2::MaterialParamInt_t> m_intAttributes;
        char m_intAttributes[0x18]; // 0xa0        
        // m_floatAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<materialsystem2::MaterialParamFloat_t> m_floatAttributes;
        char m_floatAttributes[0x18]; // 0xb8        
        // m_vectorAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<materialsystem2::MaterialParamVector_t> m_vectorAttributes;
        char m_vectorAttributes[0x18]; // 0xd0        
        // m_textureAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<materialsystem2::MaterialParamTexture_t> m_textureAttributes;
        char m_textureAttributes[0x18]; // 0xe8        
        // m_stringAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<materialsystem2::MaterialParamString_t> m_stringAttributes;
        char m_stringAttributes[0x18]; // 0x100        
        // m_renderAttributesUsed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_renderAttributesUsed;
        char m_renderAttributesUsed[0x18]; // 0x118        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(MaterialResourceData_t, m_materialName) == 0x0);
    static_assert(offsetof(MaterialResourceData_t, m_shaderName) == 0x8);
    static_assert(offsetof(MaterialResourceData_t, m_intParams) == 0x10);
    static_assert(offsetof(MaterialResourceData_t, m_floatParams) == 0x28);
    static_assert(offsetof(MaterialResourceData_t, m_vectorParams) == 0x40);
    static_assert(offsetof(MaterialResourceData_t, m_textureParams) == 0x58);
    static_assert(offsetof(MaterialResourceData_t, m_dynamicParams) == 0x70);
    static_assert(offsetof(MaterialResourceData_t, m_dynamicTextureParams) == 0x88);
    static_assert(offsetof(MaterialResourceData_t, m_intAttributes) == 0xa0);
    static_assert(offsetof(MaterialResourceData_t, m_floatAttributes) == 0xb8);
    static_assert(offsetof(MaterialResourceData_t, m_vectorAttributes) == 0xd0);
    static_assert(offsetof(MaterialResourceData_t, m_textureAttributes) == 0xe8);
    static_assert(offsetof(MaterialResourceData_t, m_stringAttributes) == 0x100);
    static_assert(offsetof(MaterialResourceData_t, m_renderAttributesUsed) == 0x118);
    
    static_assert(sizeof(MaterialResourceData_t) == 0x130);
};
