#pragma once
#include "source2sdk/modellib/VPhysXConstraintParams_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x100
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VPhysXConstraint2_t
    {
    public:
        uint32_t m_nFlags; // 0x0        
        uint16_t m_nParent; // 0x4        
        uint16_t m_nChild; // 0x6        
        modellib::VPhysXConstraintParams_t m_params; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VPhysXConstraint2_t, m_nFlags) == 0x0);
    static_assert(offsetof(VPhysXConstraint2_t, m_nParent) == 0x4);
    static_assert(offsetof(VPhysXConstraint2_t, m_nChild) == 0x6);
    static_assert(offsetof(VPhysXConstraint2_t, m_params) == 0x8);
    
    static_assert(sizeof(VPhysXConstraint2_t) == 0x100);
};
