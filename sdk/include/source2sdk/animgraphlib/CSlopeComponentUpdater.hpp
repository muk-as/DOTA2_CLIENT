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
    class CSlopeComponentUpdater : public animgraphlib::CAnimComponentUpdater
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x30[0x4]; // 0x30
        float m_flTraceDistance; // 0x34        
        animgraphlib::CAnimParamHandle m_hSlopeAngle; // 0x38        
        animgraphlib::CAnimParamHandle m_hSlopeAngleFront; // 0x3a        
        animgraphlib::CAnimParamHandle m_hSlopeAngleSide; // 0x3c        
        animgraphlib::CAnimParamHandle m_hSlopeHeading; // 0x3e        
        animgraphlib::CAnimParamHandle m_hSlopeNormal; // 0x40        
        animgraphlib::CAnimParamHandle m_hSlopeNormal_WorldSpace; // 0x42        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSlopeComponentUpdater because it is not a standard-layout class
    static_assert(sizeof(CSlopeComponentUpdater) == 0x48);
};
