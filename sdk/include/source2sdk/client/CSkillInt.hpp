#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    // 
    // static metadata: MPropertyCustomEditor "multi_int( 4 )"
    #pragma pack(push, 1)
    class CSkillInt
    {
    public:
        int32_t m_pValue[4]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSkillInt, m_pValue) == 0x0);
    
    static_assert(sizeof(CSkillInt) == 0x10);
};
