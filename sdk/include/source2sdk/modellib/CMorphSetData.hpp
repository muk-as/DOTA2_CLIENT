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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x98
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CMorphSetData
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            std::int32_t m_nWidth; // 0x10            
            std::int32_t m_nHeight; // 0x14            
            // m_bundleTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::MorphBundleType_t> m_bundleTypes;
            char m_bundleTypes[0x18]; // 0x18            
            // m_morphDatas has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CMorphData> m_morphDatas;
            char m_morphDatas[0x18]; // 0x30            
            // m_pTextureAtlas has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCTextureBase> m_pTextureAtlas;
            char m_pTextureAtlas[0x8]; // 0x48            
            // m_FlexDesc has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CFlexDesc> m_FlexDesc;
            char m_FlexDesc[0x18]; // 0x50            
            // m_FlexControllers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CFlexController> m_FlexControllers;
            char m_FlexControllers[0x18]; // 0x68            
            // m_FlexRules has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CFlexRule> m_FlexRules;
            char m_FlexRules[0x18]; // 0x80            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_nWidth) == 0x10);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_nHeight) == 0x14);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_bundleTypes) == 0x18);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_morphDatas) == 0x30);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_pTextureAtlas) == 0x48);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_FlexDesc) == 0x50);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_FlexControllers) == 0x68);
        static_assert(offsetof(source2sdk::modellib::CMorphSetData, m_FlexRules) == 0x80);
        
        static_assert(sizeof(source2sdk::modellib::CMorphSetData) == 0x98);
    };
};
