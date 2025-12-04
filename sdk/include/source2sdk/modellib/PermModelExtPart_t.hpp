#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        struct PermModelExtPart_t
        {
        public:
            CTransform m_Transform; // 0x_            
            CUtlString m_Name; // 0x_            
            std::int32_t m_nParent; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_refModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_refModel;
            char m_refModel[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::PermModelExtPart_t, m_Transform) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PermModelExtPart_t, m_Name) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PermModelExtPart_t, m_nParent) == 0x_);
        static_assert(offsetof(source2sdk::modellib::PermModelExtPart_t, m_refModel) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::PermModelExtPart_t) == 0x_);
    };
};
