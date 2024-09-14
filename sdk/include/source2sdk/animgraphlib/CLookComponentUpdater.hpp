#pragma once
#include "source2sdk/animgraphlib/CAnimComponentUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
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
    class CLookComponentUpdater : public animgraphlib::CAnimComponentUpdater
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x30[0x4]; // 0x30
        animgraphlib::CAnimParamHandle m_hLookHeading; // 0x34        
        animgraphlib::CAnimParamHandle m_hLookHeadingVelocity; // 0x36        
        animgraphlib::CAnimParamHandle m_hLookPitch; // 0x38        
        animgraphlib::CAnimParamHandle m_hLookDistance; // 0x3a        
        animgraphlib::CAnimParamHandle m_hLookDirection; // 0x3c        
        animgraphlib::CAnimParamHandle m_hLookTarget; // 0x3e        
        animgraphlib::CAnimParamHandle m_hLookTargetWorldSpace; // 0x40        
        bool m_bNetworkLookTarget; // 0x42        
        [[maybe_unused]] std::uint8_t pad_0x43[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLookComponentUpdater because it is not a standard-layout class
    static_assert(sizeof(CLookComponentUpdater) == 0x48);
};
