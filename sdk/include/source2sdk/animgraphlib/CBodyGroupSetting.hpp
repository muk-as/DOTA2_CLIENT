#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Body Group Setting"
        // static metadata: MPropertyElementNameFn
        // static metadata: M_LEGACY_OptInToSchemaPropertyDomain
        #pragma pack(push, 1)
        class CBodyGroupSetting
        {
        public:
            // metadata: MPropertyFriendlyName "BodyGroup"
            // metadata: MPropertyAttributeChoiceName "BodyGroup"
            // metadata: MPropertyAutoRebuildOnChange
            CUtlString m_BodyGroupName; // 0x_            
            // metadata: MPropertyFriendlyName "BodyGroup Option"
            // metadata: MPropertyAttributeChoiceName "BodyGroupOption"
            // metadata: MPropertyAttrExtraInfoFn
            std::int32_t m_nBodyGroupOption; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CBodyGroupSetting, m_BodyGroupName) == 0x_);
        static_assert(offsetof(source2sdk::animgraphlib::CBodyGroupSetting, m_nBodyGroupOption) == 0x_);
        
        static_assert(sizeof(source2sdk::animgraphlib::CBodyGroupSetting) == 0x_);
    };
};
