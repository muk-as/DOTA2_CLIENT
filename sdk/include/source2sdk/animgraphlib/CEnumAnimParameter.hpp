#pragma once
#include "source2sdk/animgraphlib/CConcreteAnimParameter.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Enum Parameter"
    #pragma pack(push, 1)
    class CEnumAnimParameter : public animgraphlib::CConcreteAnimParameter
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x80[0x8]; // 0x80
        // metadata: MPropertyFriendlyName "Default Value"
        uint8_t m_defaultValue; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0x89[0x7]; // 0x89
        // metadata: MPropertyFriendlyName "Values"
        // metadata: MPropertyAttrChangeCallback
        // m_enumOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_enumOptions;
        char m_enumOptions[0x18]; // 0x90        
        // metadata: MPropertyHideField
        // m_vecEnumReferenced has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint64_t> m_vecEnumReferenced;
        char m_vecEnumReferenced[0x18]; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xc0[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnumAnimParameter because it is not a standard-layout class
    static_assert(sizeof(CEnumAnimParameter) == 0xd8);
};
