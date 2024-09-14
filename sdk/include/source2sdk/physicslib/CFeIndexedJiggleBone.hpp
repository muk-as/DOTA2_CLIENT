#pragma once
#include "source2sdk/physicslib/CFeJiggleBone.hpp"
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
    // Size: 0xa4
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFeIndexedJiggleBone
    {
    public:
        uint32_t m_nNode; // 0x0        
        uint32_t m_nJiggleParent; // 0x4        
        physicslib::CFeJiggleBone m_jiggleBone; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CFeIndexedJiggleBone, m_nNode) == 0x0);
    static_assert(offsetof(CFeIndexedJiggleBone, m_nJiggleParent) == 0x4);
    static_assert(offsetof(CFeIndexedJiggleBone, m_jiggleBone) == 0x8);
    
    static_assert(sizeof(CFeIndexedJiggleBone) == 0xa4);
};
