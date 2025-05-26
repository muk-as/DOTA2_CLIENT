#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"

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
        // Size: 0xcb8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DOTA_GuildBannerProp : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad0c70[0x48];
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::client::C_DOTA_GuildBannerProp) == 0xcb8);
    };
};
