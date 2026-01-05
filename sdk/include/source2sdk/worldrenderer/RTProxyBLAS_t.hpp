#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/modellib/VertexAlbedoFormat_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Constructor
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RTProxyBLAS_t
        {
        public:
            std::uint32_t m_nFirstIndex; // 0x_            
            std::uint32_t m_nIndexCount; // 0x_            
            std::uint32_t m_nVBByteOffset; // 0x_            
            std::uint32_t m_nBaseVertex; // 0x_            
            std::uint16_t m_nVertexCount; // 0x_            
            source2sdk::modellib::VertexAlbedoFormat_t m_albedoFormat; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::mathlib_extended::AABB_t m_boundLs; // 0x_            
            Vector m_vVertexOriginLs; // 0x_            
            Vector m_vVertexExtentLs; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_nFirstIndex) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_nIndexCount) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_nVBByteOffset) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_nBaseVertex) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_nVertexCount) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_albedoFormat) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_boundLs) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_vVertexOriginLs) == 0x_);
        static_assert(offsetof(source2sdk::worldrenderer::RTProxyBLAS_t, m_vVertexExtentLs) == 0x_);
        
        static_assert(sizeof(source2sdk::worldrenderer::RTProxyBLAS_t) == 0x_);
    };
};
