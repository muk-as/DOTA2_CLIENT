#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/NmPercent_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CNmSyncTrack_Event_t
        {
        public:
            CGlobalSymbol m_ID; // 0x_            
            source2sdk::animlib::NmPercent_t m_startTime; // 0x_            
            source2sdk::animlib::NmPercent_t m_duration; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmSyncTrack_Event_t, m_ID) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmSyncTrack_Event_t, m_startTime) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmSyncTrack_Event_t, m_duration) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmSyncTrack_Event_t) == 0x_);
    };
};
