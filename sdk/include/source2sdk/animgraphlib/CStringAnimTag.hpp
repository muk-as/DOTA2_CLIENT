#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"

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
        // Size: 0x50
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Internal Tag"
        #pragma pack(push, 1)
        class CStringAnimTag : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::animgraphlib::CStringAnimTag) == 0x50);
    };
};
