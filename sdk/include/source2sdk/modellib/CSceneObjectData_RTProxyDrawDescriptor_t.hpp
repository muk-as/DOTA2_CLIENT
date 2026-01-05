#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CMaterialDrawDescriptor.hpp"
#include "source2sdk/modellib/VertexAlbedoFormat_t.hpp"

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
        struct CSceneObjectData_RTProxyDrawDescriptor_t
        {
        public:
            source2sdk::modellib::CMaterialDrawDescriptor m_drawDesc; // 0x_            
            matrix3x4_t m_mWorldFromLocal; // 0x_            
            source2sdk::modellib::VertexAlbedoFormat_t m_nVertexAlbedoFormat; // 0x_            
            std::int8_t m_nVertexAlbedoVB; // 0x_            
            std::uint16_t m_nVertexAlbedoOffset; // 0x_            
            std::uint16_t m_nVertexAlbedoStride; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_drawDesc) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_mWorldFromLocal) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexAlbedoFormat) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexAlbedoVB) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexAlbedoOffset) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t, m_nVertexAlbedoStride) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t) == 0x_);
    };
};
