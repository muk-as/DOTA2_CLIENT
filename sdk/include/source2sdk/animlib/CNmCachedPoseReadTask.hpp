#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseTask.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x58
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CNmCachedPoseReadTask : public source2sdk::animlib::CNmPoseTask
        {
        public:
            uint8_t _pad0050[0x8];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::animlib::CNmCachedPoseReadTask) == 0x58);
    };
};
