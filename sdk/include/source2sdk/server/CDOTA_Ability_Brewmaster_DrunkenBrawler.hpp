#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iBrawlActive"
    #pragma pack(push, 1)
    class CDOTA_Ability_Brewmaster_DrunkenBrawler : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnBrawlActiveChanged"
        int32_t m_iBrawlActive; // 0x5a0        
        bool m_bUpdateIcons; // 0x5a4        
        [[maybe_unused]] std::uint8_t pad_0x5a5[0x3]; // 0x5a5
        client::ParticleIndex_t m_nDrunkenBrawlerFX; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Brewmaster_DrunkenBrawler because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Brewmaster_DrunkenBrawler) == 0x5b0);
};
