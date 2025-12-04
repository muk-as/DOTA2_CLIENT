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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMarkupVolumeTagged_NavGame : public source2sdk::server::CMarkupVolumeWithRef
        {
        public:
            source2sdk::server::NavScopeFlags_t m_nScopes; // 0x_            
            bool m_bFloodFillAttribute; // 0x_            
            bool m_bSplitNavSpace; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // CUtlSymbolLarge navProperty_NavAttributes; // 0x_
            // CUtlSymbolLarge navProperty_NavAttributesGame; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMarkupVolumeTagged_NavGame because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMarkupVolumeTagged_NavGame) == 0x_);
    };
};
