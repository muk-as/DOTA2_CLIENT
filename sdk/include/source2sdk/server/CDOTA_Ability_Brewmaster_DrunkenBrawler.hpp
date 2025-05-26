#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_iBrawlActive"
        #pragma pack(push, 1)
        class CDOTA_Ability_Brewmaster_DrunkenBrawler : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBrawlActiveChanged"
            std::int32_t m_iBrawlActive; // 0x5c0            
            bool m_bUpdateIcons; // 0x5c4            
            uint8_t _pad05c5[0x3]; // 0x5c5
            source2sdk::client::ParticleIndex_t m_nDrunkenBrawlerFX; // 0x5c8            
            uint8_t _pad05cc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Brewmaster_DrunkenBrawler because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Brewmaster_DrunkenBrawler) == 0x5d0);
    };
};
