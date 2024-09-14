#pragma once
#include "source2sdk/animlib/NmPercent_t.hpp"
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
    struct NmSyncTrackTime_t
    {
    public:
        int32_t m_nEventIdx; // 0x0        
        animlib::NmPercent_t m_percentageThrough; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(NmSyncTrackTime_t, m_nEventIdx) == 0x0);
    static_assert(offsetof(NmSyncTrackTime_t, m_percentageThrough) == 0x4);
    
    static_assert(sizeof(NmSyncTrackTime_t) == 0x8);
};
