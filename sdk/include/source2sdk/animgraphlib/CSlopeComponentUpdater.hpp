#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CSlopeComponentUpdater : public source2sdk::animgraphlib::CAnimComponentUpdater
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float m_flTraceDistance; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hSlopeAngle; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hSlopeAngleFront; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hSlopeAngleSide; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hSlopeHeading; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hSlopeNormal; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hSlopeNormal_WorldSpace; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSlopeComponentUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CSlopeComponentUpdater) == 0x_);
    };
};
