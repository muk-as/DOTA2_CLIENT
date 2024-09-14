#pragma once
#include "source2sdk/modellib/CFootTrajectory.hpp"
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
    // Size: 0x18
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFootTrajectories
    {
    public:
        // m_trajectories has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::CFootTrajectory> m_trajectories;
        char m_trajectories[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CFootTrajectories, m_trajectories) == 0x0);
    
    static_assert(sizeof(CFootTrajectories) == 0x18);
};
