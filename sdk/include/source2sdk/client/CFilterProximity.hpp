#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseFilter.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x648
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFilterProximity : public source2sdk::client::CBaseFilter
        {
        public:
            float m_flRadius; // 0x640            
            uint8_t _pad0644[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFilterProximity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CFilterProximity) == 0x648);
    };
};
