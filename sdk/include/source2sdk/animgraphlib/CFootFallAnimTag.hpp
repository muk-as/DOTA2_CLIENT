#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
#include "source2sdk/animgraphlib/FootFallTagFoot_t.hpp"

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
        // Size: 0x60
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "FootFall Tag"
        #pragma pack(push, 1)
        class CFootFallAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            uint8_t _pad0050[0x8]; // 0x50
            // metadata: MPropertyFriendlyName "Foot"
            source2sdk::animgraphlib::FootFallTagFoot_t m_foot; // 0x58            
            uint8_t _pad005c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFootFallAnimTag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CFootFallAnimTag) == 0x60);
    };
};
