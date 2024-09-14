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
    // Size: 0x90
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Vector Parameter"
    #pragma pack(push, 1)
    class CVectorAnimParameter : public animgraphlib::CConcreteAnimParameter
    {
    public:
        // metadata: MPropertyFriendlyName "Default Value"
        Vector m_defaultValue; // 0x80        
        // metadata: MPropertyFriendlyName "Interpolate"
        bool m_bInterpolate; // 0x8c        
        [[maybe_unused]] std::uint8_t pad_0x8d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVectorAnimParameter because it is not a standard-layout class
    static_assert(sizeof(CVectorAnimParameter) == 0x90);
};
