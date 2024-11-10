#pragma once
#include "source2sdk/modellib/MovementGait_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct MoveSpeedId_t
    {
    public:
        modellib::MovementGait_t m_eMovementGait; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x7]; // 0x1
        CGlobalSymbol m_sName; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(MoveSpeedId_t, m_eMovementGait) == 0x0);
    static_assert(offsetof(MoveSpeedId_t, m_sName) == 0x8);
    
    static_assert(sizeof(MoveSpeedId_t) == 0x10);
};
