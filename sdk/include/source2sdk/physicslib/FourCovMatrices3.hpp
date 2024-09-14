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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x60
    // Has Trivial Constructor
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class FourCovMatrices3
    {
    public:
        FourVectors m_vDiag; // 0x0        
        fltx4 m_flXY; // 0x30        
        fltx4 m_flXZ; // 0x40        
        fltx4 m_flYZ; // 0x50        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FourCovMatrices3, m_vDiag) == 0x0);
    static_assert(offsetof(FourCovMatrices3, m_flXY) == 0x30);
    static_assert(offsetof(FourCovMatrices3, m_flXZ) == 0x40);
    static_assert(offsetof(FourCovMatrices3, m_flYZ) == 0x50);
    
    static_assert(sizeof(FourCovMatrices3) == 0x60);
};
