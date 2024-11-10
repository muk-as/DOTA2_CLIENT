#pragma once
#include "source2sdk/modellib/CRenderBufferBinding.hpp"
#include "source2sdk/rendersystemdx11/RenderPrimitiveType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
    // Standard-layout class: true
    // Size: 0xd0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMaterialDrawDescriptor
    {
    public:
        float m_flUvDensity; // 0x0        
        Vector m_vTintColor; // 0x4        
        float m_flAlpha; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x2]; // 0x14
        uint16_t m_nNumMeshlets; // 0x16        
        [[maybe_unused]] std::uint8_t pad_0x18[0x4]; // 0x18
        uint32_t m_nFirstMeshlet; // 0x1c        
        rendersystemdx11::RenderPrimitiveType_t m_nPrimitiveType; // 0x20        
        int32_t m_nBaseVertex; // 0x24        
        int32_t m_nVertexCount; // 0x28        
        int32_t m_nStartIndex; // 0x2c        
        int32_t m_nIndexCount; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0x64]; // 0x34
        modellib::CRenderBufferBinding m_indexBuffer; // 0x98        
        [[maybe_unused]] std::uint8_t pad_0xb8[0x10]; // 0xb8
        // m_material has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_material;
        char m_material[0x8]; // 0xc8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMaterialDrawDescriptor, m_flUvDensity) == 0x0);
    static_assert(offsetof(CMaterialDrawDescriptor, m_vTintColor) == 0x4);
    static_assert(offsetof(CMaterialDrawDescriptor, m_flAlpha) == 0x10);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nNumMeshlets) == 0x16);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nFirstMeshlet) == 0x1c);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nPrimitiveType) == 0x20);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nBaseVertex) == 0x24);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nVertexCount) == 0x28);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nStartIndex) == 0x2c);
    static_assert(offsetof(CMaterialDrawDescriptor, m_nIndexCount) == 0x30);
    static_assert(offsetof(CMaterialDrawDescriptor, m_indexBuffer) == 0x98);
    static_assert(offsetof(CMaterialDrawDescriptor, m_material) == 0xc8);
    
    static_assert(sizeof(CMaterialDrawDescriptor) == 0xd0);
};
