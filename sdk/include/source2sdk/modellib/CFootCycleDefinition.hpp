#pragma once
#include "source2sdk/modellib/CAnimCycle.hpp"
#include "source2sdk/modellib/CFootCycle.hpp"
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
    // Standard-layout class: false
    // Size: 0x3c
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFootCycleDefinition
    {
    public:
        Vector m_vStancePositionMS; // 0x0        
        Vector m_vMidpointPositionMS; // 0xc        
        float m_flStanceDirectionMS; // 0x18        
        Vector m_vToStrideStartPos; // 0x1c        
        modellib::CAnimCycle m_stanceCycle; // 0x28        
        modellib::CFootCycle m_footLiftCycle; // 0x2c        
        modellib::CFootCycle m_footOffCycle; // 0x30        
        modellib::CFootCycle m_footStrikeCycle; // 0x34        
        modellib::CFootCycle m_footLandCycle; // 0x38        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFootCycleDefinition because it is not a standard-layout class
    static_assert(sizeof(CFootCycleDefinition) == 0x3c);
};
