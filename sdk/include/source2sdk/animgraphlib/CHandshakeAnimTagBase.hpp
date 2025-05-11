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
        // Size: 0x58
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CHandshakeAnimTagBase : public source2sdk::animgraphlib::CAnimTagBase
        {
        public:
            // metadata: MPropertyFriendlyName "Disables Handshake"
            bool m_bIsDisableTag; // 0x50            
            uint8_t _pad0051[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CHandshakeAnimTagBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animgraphlib::CHandshakeAnimTagBase) == 0x58);
    };
};
