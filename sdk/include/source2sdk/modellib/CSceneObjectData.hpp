#pragma once
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/modellib/CMaterialDrawDescriptor.hpp"
#include "source2sdk/modellib/CMeshletDescriptor.hpp"
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
    // Size: 0x60
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSceneObjectData
    {
    public:
        Vector m_vMinBounds; // 0x0        
        Vector m_vMaxBounds; // 0xc        
        // m_drawCalls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<modellib::CMaterialDrawDescriptor> m_drawCalls;
        char m_drawCalls[0x10]; // 0x18        
        // m_drawBounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<mathlib_extended::AABB_t> m_drawBounds;
        char m_drawBounds[0x10]; // 0x28        
        // m_meshlets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<modellib::CMeshletDescriptor> m_meshlets;
        char m_meshlets[0x10]; // 0x38        
        Vector4D m_vTintColor; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x58[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSceneObjectData, m_vMinBounds) == 0x0);
    static_assert(offsetof(CSceneObjectData, m_vMaxBounds) == 0xc);
    static_assert(offsetof(CSceneObjectData, m_drawCalls) == 0x18);
    static_assert(offsetof(CSceneObjectData, m_drawBounds) == 0x28);
    static_assert(offsetof(CSceneObjectData, m_meshlets) == 0x38);
    static_assert(offsetof(CSceneObjectData, m_vTintColor) == 0x48);
    
    static_assert(sizeof(CSceneObjectData) == 0x60);
};
