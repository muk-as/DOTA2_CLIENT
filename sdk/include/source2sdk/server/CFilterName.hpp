#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseFilter.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x540
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFilterName : public source2sdk::server::CBaseFilter
        {
        public:
            CUtlSymbolLarge m_iFilterName; // 0x538            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFilterName because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFilterName) == 0x540);
    };
};
