#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmSyncTrack_Event_t.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmSyncTrack
        {
        public:
            // m_syncEvents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<source2sdk::animlib::CNmSyncTrack_Event_t,10> m_syncEvents;
            char m_syncEvents[0x_]; // 0x_            
            std::int32_t m_nStartEventOffset; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::CNmSyncTrack, m_syncEvents) == 0x_);
        static_assert(offsetof(source2sdk::animlib::CNmSyncTrack, m_nStartEventOffset) == 0x_);
        
        static_assert(sizeof(source2sdk::animlib::CNmSyncTrack) == 0x_);
    };
};
