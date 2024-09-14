#pragma once
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/TwoBoneIKSettings_t.hpp"
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
    // Size: 0x1e0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CTwoBoneIKUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x68[0x8]; // 0x68
        animgraphlib::TwoBoneIKSettings_t m_opFixedData; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x1d0[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTwoBoneIKUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CTwoBoneIKUpdateNode) == 0x1e0);
};
