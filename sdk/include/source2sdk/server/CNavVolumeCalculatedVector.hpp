#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/navlib/CNavVolume.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x1
        // Standard-layout class: false
        // Size: 0x98
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CNavVolumeCalculatedVector : public source2sdk::navlib::CNavVolume
        {
        public:
            uint8_t _pad0070[0x28];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CNavVolumeCalculatedVector) == 0x98);
    };
};
