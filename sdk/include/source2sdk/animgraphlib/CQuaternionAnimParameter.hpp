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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xa0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Quaternion Parameter"
    #pragma pack(push, 1)
    class CQuaternionAnimParameter : public animgraphlib::CConcreteAnimParameter
    {
    public:
        // metadata: MPropertyFriendlyName "Default Value"
        Quaternion m_defaultValue; // 0x80        
        // metadata: MPropertyFriendlyName "Interpolate"
        bool m_bInterpolate; // 0x90        
        [[maybe_unused]] std::uint8_t pad_0x91[0xf];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CQuaternionAnimParameter because it is not a standard-layout class
    static_assert(sizeof(CQuaternionAnimParameter) == 0xa0);
};
