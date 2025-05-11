#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/CHandshakeAnimTagBase.hpp"

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
        // static metadata: MPropertyFriendlyName "Movement Handshake Tag"
        #pragma pack(push, 1)
        class CMovementHandshakeAnimTag : public source2sdk::animgraphlib::CHandshakeAnimTagBase
        {
        public:
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::animgraphlib::CMovementHandshakeAnimTag) == 0x58);
    };
};
