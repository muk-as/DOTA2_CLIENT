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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CNmSyncTrack__Event_t
    {
    public:
        CGlobalSymbol m_ID; // 0x0        
        animlib::NmPercent_t m_startTime; // 0x8        
        animlib::NmPercent_t m_duration; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmSyncTrack__Event_t, m_ID) == 0x0);
    static_assert(offsetof(CNmSyncTrack__Event_t, m_startTime) == 0x8);
    static_assert(offsetof(CNmSyncTrack__Event_t, m_duration) == 0xc);
    
    static_assert(sizeof(CNmSyncTrack__Event_t) == 0x10);
};
