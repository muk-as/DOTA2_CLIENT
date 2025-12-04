#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        struct PermModelInfo_t
        {
        public:
            std::uint32_t m_nFlags; // 0x_            
            Vector m_vHullMin; // 0x_            
            Vector m_vHullMax; // 0x_            
            Vector m_vViewMin; // 0x_            
            Vector m_vViewMax; // 0x_            
            float m_flMass; // 0x_            
            Vector m_vEyePosition; // 0x_            
            float m_flMaxEyeDeflection; // 0x_            
            CUtlString m_sSurfaceProperty; // 0x_            
            CUtlString m_keyValueText; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::PermModelInfo_t, m_nFlags) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PermModelInfo_t, m_vHullMin) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PermModelInfo_t, m_vHullMax) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PermModelInfo_t, m_vViewMin) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PermModelInfo_t, m_vViewMax) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PermModelInfo_t, m_flMass) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PermModelInfo_t, m_vEyePosition) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PermModelInfo_t, m_flMaxEyeDeflection) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PermModelInfo_t, m_sSurfaceProperty) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PermModelInfo_t, m_keyValueText) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::PermModelInfo_t) == 0x_);
    };
};
