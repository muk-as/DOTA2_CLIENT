#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseFilter.hpp"
#include "source2sdk/server/CDotaEntityFilterFlags.hpp"

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
        // Size: 0x558
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFilterDotaEntities : public source2sdk::server::CBaseFilter
        {
        public:
            source2sdk::server::CDotaEntityFilterFlags m_FilterFlags; // 0x538            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFilterDotaEntities because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFilterDotaEntities) == 0x558);
    };
};
