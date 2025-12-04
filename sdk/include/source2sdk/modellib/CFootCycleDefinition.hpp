#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CAnimCycle.hpp"
#include "source2sdk/modellib/CFootCycle.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFootCycleDefinition
        {
        public:
            Vector m_vStancePositionMS; // 0x_            
            Vector m_vMidpointPositionMS; // 0x_            
            float m_flStanceDirectionMS; // 0x_            
            Vector m_vToStrideStartPos; // 0x_            
            source2sdk::modellib::CAnimCycle m_stanceCycle; // 0x_            
            source2sdk::modellib::CFootCycle m_footLiftCycle; // 0x_            
            source2sdk::modellib::CFootCycle m_footOffCycle; // 0x_            
            source2sdk::modellib::CFootCycle m_footStrikeCycle; // 0x_            
            source2sdk::modellib::CFootCycle m_footLandCycle; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFootCycleDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CFootCycleDefinition) == 0x_);
    };
};
