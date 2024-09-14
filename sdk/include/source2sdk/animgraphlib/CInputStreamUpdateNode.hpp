#pragma once
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
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
    // Size: 0x60
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CInputStreamUpdateNode : public animgraphlib::CLeafUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x8];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CInputStreamUpdateNode) == 0x60);
};
