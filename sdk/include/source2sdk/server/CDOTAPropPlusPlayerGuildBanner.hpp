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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xb00
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
            std::int32_t m_nPlayerID; // 0xaf0            
            uint8_t _pad0af4[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAPropPlusPlayerGuildBanner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAPropPlusPlayerGuildBanner) == 0xb00);
    };
};
