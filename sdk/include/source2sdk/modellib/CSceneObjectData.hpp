#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/mathlib_extended/AABB_t.hpp"
#include "source2sdk/modellib/CMaterialDrawDescriptor.hpp"
#include "source2sdk/modellib/CMeshletDescriptor.hpp"
#include "source2sdk/modellib/CSceneObjectData_RTProxyDrawDescriptor_t.hpp"

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
        class CSceneObjectData
        {
        public:
            Vector m_vMinBounds; // 0x_            
            Vector m_vMaxBounds; // 0x_            
            // m_drawCalls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::modellib::CMaterialDrawDescriptor> m_drawCalls;
            char m_drawCalls[0x_]; // 0x_            
            // m_drawBounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::mathlib_extended::AABB_t> m_drawBounds;
            char m_drawBounds[0x_]; // 0x_            
            // m_meshlets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::modellib::CMeshletDescriptor> m_meshlets;
            char m_meshlets[0x_]; // 0x_            
            // m_rtProxyDrawCalls has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVector<source2sdk::modellib::CSceneObjectData_RTProxyDrawDescriptor_t> m_rtProxyDrawCalls;
            char m_rtProxyDrawCalls[0x_]; // 0x_            
            Vector4D m_vTintColor; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_vMinBounds) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_vMaxBounds) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_drawCalls) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_drawBounds) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_meshlets) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_rtProxyDrawCalls) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CSceneObjectData, m_vTintColor) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CSceneObjectData) == 0x_);
    };
};
