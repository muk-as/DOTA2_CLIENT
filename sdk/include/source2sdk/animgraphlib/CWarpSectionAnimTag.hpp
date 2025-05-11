#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CWarpSectionAnimTagBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x58
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Warp Section Tag"
        #pragma pack(push, 1)
        class CWarpSectionAnimTag : public source2sdk::animgraphlib::CWarpSectionAnimTagBase
        {
        public:
            // metadata: MPropertyFriendlyName "Warp Position"
            bool m_bWarpPosition; // 0x50            
            // metadata: MPropertyFriendlyName "Warp Orientation"
            bool m_bWarpOrientation; // 0x51            
            uint8_t _pad0052[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CWarpSectionAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CWarpSectionAnimTag) == 0x58);
    };
};
