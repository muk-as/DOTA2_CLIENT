#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDotaEntityFilterFlags.hpp"
#include "source2sdk/server/CTriggerMultiple.hpp"

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
        // Size: 0xa08
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerDota : public source2sdk::server::CTriggerMultiple
        {
        public:
            source2sdk::server::CDotaEntityFilterFlags m_FilterFlags; // 0x9e8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerDota because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerDota) == 0xa08);
    };
};
