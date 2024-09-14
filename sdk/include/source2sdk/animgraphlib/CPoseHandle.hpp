#pragma once
#include "source2sdk/animgraphlib/PoseType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x2
    // Alignment: 0x2
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPoseHandle
    {
    public:
        uint16_t m_nIndex; // 0x0        
        animgraphlib::PoseType_t m_eType; // 0x2        
        [[maybe_unused]] std::uint8_t pad_0x03[0x1];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPoseHandle, m_nIndex) == 0x0);
    static_assert(offsetof(CPoseHandle, m_eType) == 0x2);
    
    static_assert(sizeof(CPoseHandle) == 0x4);
};
