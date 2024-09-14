#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CovMatrix3
    {
    public:
        Vector m_vDiag; // 0x0        
        float m_flXY; // 0xc        
        float m_flXZ; // 0x10        
        float m_flYZ; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CovMatrix3, m_vDiag) == 0x0);
    static_assert(offsetof(CovMatrix3, m_flXY) == 0xc);
    static_assert(offsetof(CovMatrix3, m_flXZ) == 0x10);
    static_assert(offsetof(CovMatrix3, m_flYZ) == 0x14);
    
    static_assert(sizeof(CovMatrix3) == 0x18);
};
