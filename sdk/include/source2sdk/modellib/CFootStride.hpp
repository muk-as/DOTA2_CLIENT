#pragma once
#include "source2sdk/modellib/CFootCycleDefinition.hpp"
#include "source2sdk/modellib/CFootTrajectories.hpp"
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
    // Standard-layout class: false
    // Size: 0x58
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFootStride
    {
    public:
        modellib::CFootCycleDefinition m_definition; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4]; // 0x3c
        modellib::CFootTrajectories m_trajectories; // 0x40        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFootStride because it is not a standard-layout class
    static_assert(sizeof(CFootStride) == 0x58);
};
