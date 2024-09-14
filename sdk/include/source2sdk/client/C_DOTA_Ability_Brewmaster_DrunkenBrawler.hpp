#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iBrawlActive"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Brewmaster_DrunkenBrawler : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnBrawlActiveChanged"
        int32_t m_iBrawlActive; // 0x5d8        
        bool m_bUpdateIcons; // 0x5dc        
        [[maybe_unused]] std::uint8_t pad_0x5dd[0x3]; // 0x5dd
        client::ParticleIndex_t m_nDrunkenBrawlerFX; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Brewmaster_DrunkenBrawler because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Brewmaster_DrunkenBrawler) == 0x5e8);
};
