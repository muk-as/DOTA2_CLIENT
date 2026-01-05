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
        struct VPhysXCollisionAttributes_t
        {
        public:
            std::int32_t m_nIncludeDetailLayerCount; // 0x_            
            std::uint32_t m_CollisionGroup; // 0x_            
            // m_InteractAs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_InteractAs;
            char m_InteractAs[0x_]; // 0x_            
            // m_InteractWith has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_InteractWith;
            char m_InteractWith[0x_]; // 0x_            
            // m_InteractExclude has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_InteractExclude;
            char m_InteractExclude[0x_]; // 0x_            
            // m_DetailLayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint32_t> m_DetailLayers;
            char m_DetailLayers[0x_]; // 0x_            
            CUtlString m_CollisionGroupString; // 0x_            
            // m_InteractAsStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_InteractAsStrings;
            char m_InteractAsStrings[0x_]; // 0x_            
            // m_InteractWithStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_InteractWithStrings;
            char m_InteractWithStrings[0x_]; // 0x_            
            // m_InteractExcludeStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_InteractExcludeStrings;
            char m_InteractExcludeStrings[0x_]; // 0x_            
            // m_DetailLayerStrings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_DetailLayerStrings;
            char m_DetailLayerStrings[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_nIncludeDetailLayerCount) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_CollisionGroup) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_InteractAs) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_InteractWith) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_InteractExclude) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_DetailLayers) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_CollisionGroupString) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_InteractAsStrings) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_InteractWithStrings) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_InteractExcludeStrings) == 0x_);
        static_assert(offsetof(source2sdk::modellib::VPhysXCollisionAttributes_t, m_DetailLayerStrings) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::VPhysXCollisionAttributes_t) == 0x_);
    };
};
