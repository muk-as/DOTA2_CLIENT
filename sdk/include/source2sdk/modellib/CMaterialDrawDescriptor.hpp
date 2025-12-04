#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CMaterialDrawDescriptor_RigidMeshPart_t.hpp"
#include "source2sdk/modellib/CRenderBufferBinding.hpp"
#include "source2sdk/modellib/RenderPrimitiveType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMaterialDrawDescriptor
        {
        public:
            float m_flUvDensity; // 0x_            
            Vector m_vTintColor; // 0x_            
            float m_flAlpha; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint16_t m_nNumMeshlets; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_nFirstMeshlet; // 0x_            
            std::uint32_t m_nAppliedIndexOffset; // 0x_            
            std::uint8_t m_nDepthVertexBufferIndex; // 0x_            
            std::uint8_t m_nMeshletPackedIVBIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_rigidMeshParts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::modellib::CMaterialDrawDescriptor_RigidMeshPart_t> m_rigidMeshParts;
            char m_rigidMeshParts[0x_]; // 0x_            
            source2sdk::modellib::RenderPrimitiveType_t m_nPrimitiveType; // 0x_            
            std::int32_t m_nBaseVertex; // 0x_            
            std::int32_t m_nVertexCount; // 0x_            
            std::int32_t m_nStartIndex; // 0x_            
            std::int32_t m_nIndexCount; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::modellib::CRenderBufferBinding m_indexBuffer; // 0x_            
            source2sdk::modellib::CRenderBufferBinding m_meshletPackedIVB; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_material has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_material;
            char m_material[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_flUvDensity) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_vTintColor) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_flAlpha) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nNumMeshlets) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nFirstMeshlet) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nAppliedIndexOffset) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nDepthVertexBufferIndex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nMeshletPackedIVBIndex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_rigidMeshParts) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nPrimitiveType) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nBaseVertex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nVertexCount) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nStartIndex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_nIndexCount) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_indexBuffer) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_meshletPackedIVB) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMaterialDrawDescriptor, m_material) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CMaterialDrawDescriptor) == 0x_);
    };
};
