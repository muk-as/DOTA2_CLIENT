#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace modellib
    {
        struct CModelConfig;
    };
};

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
        class CModelConfigList
        {
        public:
            bool m_bHideMaterialGroupInTools; // 0x_            
            bool m_bHideRenderColorInTools; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Configs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CModelConfig*> m_Configs;
            char m_Configs[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CModelConfigList, m_bHideMaterialGroupInTools) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CModelConfigList, m_bHideRenderColorInTools) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CModelConfigList, m_Configs) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CModelConfigList) == 0x_);
    };
};
