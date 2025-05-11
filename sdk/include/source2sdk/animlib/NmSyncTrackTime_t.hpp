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
            std::int32_t m_nEventIdx; // 0x0            
            source2sdk::animlib::NmPercent_t m_percentageThrough; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animlib::NmSyncTrackTime_t, m_nEventIdx) == 0x0);
        static_assert(offsetof(source2sdk::animlib::NmSyncTrackTime_t, m_percentageThrough) == 0x4);
        
        static_assert(sizeof(source2sdk::animlib::NmSyncTrackTime_t) == 0x8);
    };
};
