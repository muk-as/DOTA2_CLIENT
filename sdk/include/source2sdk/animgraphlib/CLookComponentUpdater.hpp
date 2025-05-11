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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x48
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CLookComponentUpdater : public source2sdk::animgraphlib::CAnimComponentUpdater
        {
        public:
            uint8_t _pad0030[0x4]; // 0x30
            source2sdk::animgraphlib::CAnimParamHandle m_hLookHeading; // 0x34            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookHeadingNormalized; // 0x36            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookHeadingVelocity; // 0x38            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookPitch; // 0x3a            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookDistance; // 0x3c            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookDirection; // 0x3e            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookTarget; // 0x40            
            source2sdk::animgraphlib::CAnimParamHandle m_hLookTargetWorldSpace; // 0x42            
            bool m_bNetworkLookTarget; // 0x44            
            uint8_t _pad0045[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLookComponentUpdater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CLookComponentUpdater) == 0x48);
    };
};
