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
        class CFilterName : public source2sdk::client::CBaseFilter
        {
        public:
            CUtlSymbolLarge m_iFilterName; // 0x640            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFilterName because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CFilterName) == 0x648);
    };
};
