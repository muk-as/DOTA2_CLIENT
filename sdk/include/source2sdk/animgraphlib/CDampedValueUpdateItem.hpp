#pragma once
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
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
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDampedValueUpdateItem
    {
    public:
        animgraphlib::CAnimInputDamping m_damping; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x10[0x8]; // 0x10
        animgraphlib::CAnimParamHandle m_hParamIn; // 0x18        
        animgraphlib::CAnimParamHandle m_hParamOut; // 0x1a        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDampedValueUpdateItem, m_damping) == 0x0);
    static_assert(offsetof(CDampedValueUpdateItem, m_hParamIn) == 0x18);
    static_assert(offsetof(CDampedValueUpdateItem, m_hParamOut) == 0x1a);
    
    static_assert(sizeof(CDampedValueUpdateItem) == 0x20);
};
