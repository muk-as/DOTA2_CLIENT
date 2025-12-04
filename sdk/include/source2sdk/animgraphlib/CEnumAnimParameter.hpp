#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CConcreteAnimParameter.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: M_LEGACY_OptInToSchemaPropertyDomain
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Enum Parameter"
        #pragma pack(push, 1)
        class CEnumAnimParameter : public source2sdk::animgraphlib::CConcreteAnimParameter
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Default Value"
            std::uint8_t m_defaultValue; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Values"
            // metadata: MPropertyAttrChangeCallback
            // m_enumOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_enumOptions;
            char m_enumOptions[0x_]; // 0x_            
            // metadata: MPropertySuppressField
            // m_vecEnumReferenced has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint64_t> m_vecEnumReferenced;
            char m_vecEnumReferenced[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnumAnimParameter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CEnumAnimParameter) == 0x_);
    };
};
