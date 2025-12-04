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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            std::int32_t m_nPlayerID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPropPlusPlayerGuildBanner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTAPropPlusPlayerGuildBanner) == 0x_);
    };
};
