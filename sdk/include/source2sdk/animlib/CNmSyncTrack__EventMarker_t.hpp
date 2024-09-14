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
    struct CNmSyncTrack__EventMarker_t
    {
    public:
        animlib::NmPercent_t m_startTime; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CGlobalSymbol m_ID; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmSyncTrack__EventMarker_t, m_startTime) == 0x0);
    static_assert(offsetof(CNmSyncTrack__EventMarker_t, m_ID) == 0x8);
    
    static_assert(sizeof(CNmSyncTrack__EventMarker_t) == 0x10);
};
