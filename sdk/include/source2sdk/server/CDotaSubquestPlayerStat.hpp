#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/subquest_player_stat_types_t.hpp"
#include "source2sdk/server/CDotaSubquestBase.hpp"

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
        // Size: 0x748
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDotaSubquestPlayerStat : public source2sdk::server::CDotaSubquestBase
        {
        public:
            source2sdk::client::subquest_player_stat_types_t m_ePlayerStatType; // 0x738            
            std::int32_t m_nPlayerStatValue; // 0x73c            
            std::int32_t m_nStartingStatOffset; // 0x740            
            uint8_t _pad0744[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaSubquestPlayerStat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaSubquestPlayerStat) == 0x748);
    };
};
