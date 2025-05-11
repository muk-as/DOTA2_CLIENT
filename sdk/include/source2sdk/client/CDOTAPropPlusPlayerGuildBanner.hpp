#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_GuildBannerDynamic.hpp"

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
        // Size: 0xb08
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nPlayerID"
        #pragma pack(push, 1)
        class CDOTAPropPlusPlayerGuildBanner : public source2sdk::client::C_DOTA_GuildBannerDynamic
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerID; // 0xb00            
            uint8_t _pad0b04[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPropPlusPlayerGuildBanner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTAPropPlusPlayerGuildBanner) == 0xb08);
    };
};
