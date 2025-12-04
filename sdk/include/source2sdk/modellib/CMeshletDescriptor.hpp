#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/PackedAABB_t.hpp"
#include "source2sdk/modellib/CDrawCullingData.hpp"

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
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMeshletDescriptor
        {
        public:
            source2sdk::mathlib_extended::PackedAABB_t m_PackedAABB; // 0x_            
            source2sdk::modellib::CDrawCullingData m_CullingData; // 0x_            
            std::uint32_t m_nVertexOffset; // 0x_            
            std::uint32_t m_nTriangleOffset; // 0x_            
            std::uint8_t m_nVertexCount; // 0x_            
            std::uint8_t m_nTriangleCount; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CMeshletDescriptor, m_PackedAABB) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMeshletDescriptor, m_CullingData) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMeshletDescriptor, m_nVertexOffset) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMeshletDescriptor, m_nTriangleOffset) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMeshletDescriptor, m_nVertexCount) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMeshletDescriptor, m_nTriangleCount) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CMeshletDescriptor) == 0x_);
    };
};
