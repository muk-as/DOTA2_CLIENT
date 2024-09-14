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
    // Size: 0x88
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Bool Parameter"
    #pragma pack(push, 1)
    class CBoolAnimParameter : public animgraphlib::CConcreteAnimParameter
    {
    public:
        // metadata: MPropertyFriendlyName "Default Value"
        bool m_bDefaultValue; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x81[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBoolAnimParameter because it is not a standard-layout class
    static_assert(sizeof(CBoolAnimParameter) == 0x88);
};
