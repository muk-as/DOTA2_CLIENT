#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CMarkupVolumeTagged.hpp"
#include "source2sdk/server/NavScopeFlags_t.hpp"

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
        // Size: 0x810
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMarkupVolumeTagged_Nav : public source2sdk::server::CMarkupVolumeTagged
        {
        public:
            source2sdk::server::NavScopeFlags_t m_nScopeFlags; // 0x808            
            uint8_t _pad0809[0x7];
            
            // Datamap fields:
            // CUtlSymbolLarge navProperty_NavAttributes; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMarkupVolumeTagged_Nav because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMarkupVolumeTagged_Nav) == 0x810);
    };
};
