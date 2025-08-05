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
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: false
        // Size: 0xd8
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CNmBlendTaskBase : public source2sdk::animlib::CNmPoseTask
        {
        public:
            uint8_t _pad0050[0x88];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::animlib::CNmBlendTaskBase) == 0xd8);
    };
};
