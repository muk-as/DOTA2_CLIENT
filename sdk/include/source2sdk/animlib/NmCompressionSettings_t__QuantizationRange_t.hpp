#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct NmCompressionSettings_t__QuantizationRange_t
    {
    public:
        float m_flRangeStart; // 0x0        
        float m_flRangeLength; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(NmCompressionSettings_t__QuantizationRange_t, m_flRangeStart) == 0x0);
    static_assert(offsetof(NmCompressionSettings_t__QuantizationRange_t, m_flRangeLength) == 0x4);
    
    static_assert(sizeof(NmCompressionSettings_t__QuantizationRange_t) == 0x8);
};
