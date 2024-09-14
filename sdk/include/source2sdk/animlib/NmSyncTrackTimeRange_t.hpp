#pragma once
#include "source2sdk/animlib/NmSyncTrackTime_t.hpp"
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
    // Size: 0x10
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct NmSyncTrackTimeRange_t
    {
    public:
        animlib::NmSyncTrackTime_t m_startTime; // 0x0        
        animlib::NmSyncTrackTime_t m_endTime; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(NmSyncTrackTimeRange_t, m_startTime) == 0x0);
    static_assert(offsetof(NmSyncTrackTimeRange_t, m_endTime) == 0x8);
    
    static_assert(sizeof(NmSyncTrackTimeRange_t) == 0x10);
};
