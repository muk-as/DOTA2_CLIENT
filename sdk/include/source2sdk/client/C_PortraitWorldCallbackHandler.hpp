#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_PortraitWorldCallbackHandler : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05e8[0x8];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_PortraitWorldCallbackHandler) == 0x5f0);
    };
};
