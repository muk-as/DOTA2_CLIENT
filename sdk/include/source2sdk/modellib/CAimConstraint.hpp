#pragma once
#include "source2sdk/modellib/CBaseConstraint.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x90
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAimConstraint : public modellib::CBaseConstraint
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x68[0x8]; // 0x68
        Quaternion m_qAimOffset; // 0x70        
        uint32_t m_nUpType; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x84[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAimConstraint because it is not a standard-layout class
    static_assert(sizeof(CAimConstraint) == 0x90);
};
