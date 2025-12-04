#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CFlexController.hpp"
#include "source2sdk/modellib/CFlexDesc.hpp"
#include "source2sdk/modellib/CFlexRule.hpp"
#include "source2sdk/modellib/CMorphData.hpp"
#include "source2sdk/modellib/MorphBundleType_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"

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
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMorphSetData
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nWidth; // 0x_            
            std::int32_t m_nHeight; // 0x_            
            // m_bundleTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::MorphBundleType_t> m_bundleTypes;
            char m_bundleTypes[0x_]; // 0x_            
            // m_morphDatas has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CMorphData> m_morphDatas;
            char m_morphDatas[0x_]; // 0x_            
            // m_pTextureAtlas has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureAtlas;
            char m_pTextureAtlas[0x_]; // 0x_            
            // m_FlexDesc has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CFlexDesc> m_FlexDesc;
            char m_FlexDesc[0x_]; // 0x_            
            // m_FlexControllers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CFlexController> m_FlexControllers;
            char m_FlexControllers[0x_]; // 0x_            
            // m_FlexRules has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CFlexRule> m_FlexRules;
            char m_FlexRules[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_nWidth) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_nHeight) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_bundleTypes) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_morphDatas) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_pTextureAtlas) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_FlexDesc) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_FlexControllers) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_FlexRules) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CMorphSetData) == 0x_);
    };
};
