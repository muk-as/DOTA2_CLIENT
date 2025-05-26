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
        // Size: 0x640
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFilterClass : public source2sdk::client::CBaseFilter
        {
        public:
            CUtlSymbolLarge m_iFilterClass; // 0x638            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFilterClass because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CFilterClass) == 0x640);
    };
};
