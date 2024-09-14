#pragma once
#include "source2sdk/physicslib/RnHull_t.hpp"
#include "source2sdk/physicslib/RnShapeDesc_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x110
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnHullDesc_t : public physicslib::RnShapeDesc_t
    {
    public:
        physicslib::RnHull_t m_Hull; // 0x18        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in RnHullDesc_t because it is not a standard-layout class
    static_assert(sizeof(RnHullDesc_t) == 0x110);
};
