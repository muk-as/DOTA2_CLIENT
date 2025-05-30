#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CMarkupVolumeWithRef.hpp"
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
        // Size: 0x838
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMarkupVolumeTagged_NavGame : public source2sdk::server::CMarkupVolumeWithRef
        {
        public:
            source2sdk::server::NavScopeFlags_t m_nScopeFlags; // 0x830            
            bool m_bFloodFillAttribute; // 0x831            
            uint8_t _pad0832[0x6];
            
            // Datamap fields:
            // CUtlSymbolLarge navProperty_NavAttributes; // 0x7fffffff
            // CUtlSymbolLarge navProperty_NavAttributesGame; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMarkupVolumeTagged_NavGame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMarkupVolumeTagged_NavGame) == 0x838);
    };
};
