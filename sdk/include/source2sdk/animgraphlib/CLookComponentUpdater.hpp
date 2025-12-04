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
        class CLookComponentUpdater : public source2sdk::animgraphlib::CAnimComponentUpdater
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::animgraphlib::CAnimParamHandle m_hLookHeading; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookHeadingNormalized; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookHeadingVelocity; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookPitch; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookDistance; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookDirection; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookTarget; // 0x_            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookTargetWorldSpace; // 0x_            
            bool m_bNetworkLookTarget; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLookComponentUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CLookComponentUpdater) == 0x_);
    };
};
