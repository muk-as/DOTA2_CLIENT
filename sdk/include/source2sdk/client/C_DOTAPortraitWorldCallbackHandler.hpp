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
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DOTAPortraitWorldCallbackHandler : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05e0[0x8];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_DOTAPortraitWorldCallbackHandler) == 0x5e8);
    };
};
