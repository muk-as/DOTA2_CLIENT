#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/physicslib/CollisionDetailLayerInfo_t_Name_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace physicslib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataOutlinerLeafNameFn
        #pragma pack(push, 1)
        struct CollisionDetailLayerInfo_t
        {
        public:
            // metadata: MPropertyFriendlyName "Description"
            // metadata: MPropertyDescription "How the detail layer is meant to be used"
            CUtlString m_sDescription; // 0x_            
            // metadata: MPropertyFriendlyName "Friendly Name"
            // metadata: MPropertyDescription "How name is displayed in tools"
            CUtlString m_sFriendlyName; // 0x_            
            // metadata: MPropertyDescription "Only query can use this layer, not collision"
            bool m_bIsQueryOnly; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyDescription "Parent detail layers automatically include the child layer"
            CUtlString m_sParentDetailLayer; // 0x_            
            // metadata: MPropertySuppressField
            // m_vecSubtreeDetailLayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::physicslib::CollisionDetailLayerInfo_t_Name_t> m_vecSubtreeDetailLayers;
            char m_vecSubtreeDetailLayers[0x_]; // 0x_            
            // metadata: MPropertySuppressField
            bool m_bNotPickable; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::physicslib::CollisionDetailLayerInfo_t, m_sDescription) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CollisionDetailLayerInfo_t, m_sFriendlyName) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CollisionDetailLayerInfo_t, m_bIsQueryOnly) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CollisionDetailLayerInfo_t, m_sParentDetailLayer) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CollisionDetailLayerInfo_t, m_vecSubtreeDetailLayers) == 0x_);
        static_assert(offsetof(source2sdk::physicslib::CollisionDetailLayerInfo_t, m_bNotPickable) == 0x_);
        
        static_assert(sizeof(source2sdk::physicslib::CollisionDetailLayerInfo_t) == 0x_);
    };
};
