#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CFootCycleDefinition.hpp"
#include "source2sdk/modellib/CFootTrajectories.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CFootStride
        {
        public:
            source2sdk::modellib::CFootCycleDefinition m_definition; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::modellib::CFootTrajectories m_trajectories; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFootStride because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::modellib::CFootStride) == 0x_);
    };
};
