#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_GuildBannerDynamic.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xae0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nPlayerID"
        #pragma pack(push, 1)
        class CDOTAPropPlusPlayerGuildBanner : public source2sdk::server::CDOTA_GuildBannerDynamic
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nPlayerID; // 0xad8            
            uint8_t _pad0adc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPropPlusPlayerGuildBanner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAPropPlusPlayerGuildBanner) == 0xae0);
    };
};
