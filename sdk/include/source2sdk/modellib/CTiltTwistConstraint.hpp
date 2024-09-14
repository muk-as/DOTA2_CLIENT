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
    // Size: 0xa0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CTiltTwistConstraint : public modellib::CBaseConstraint
    {
    public:
        int32_t m_nTargetAxis; // 0x68        
        int32_t m_nSlaveAxis; // 0x6c        
        [[maybe_unused]] std::uint8_t pad_0x70[0x30];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTiltTwistConstraint because it is not a standard-layout class
    static_assert(sizeof(CTiltTwistConstraint) == 0xa0);
};
