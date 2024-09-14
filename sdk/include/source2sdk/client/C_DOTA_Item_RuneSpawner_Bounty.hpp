#pragma once
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/client/DOTA_RUNES.hpp"
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
    // Size: 0x810
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flLastSpawnTime"
    // static metadata: MNetworkVarNames "float m_flNextSpawnTime"
    #pragma pack(push, 1)
    class C_DOTA_Item_RuneSpawner_Bounty : public client::CBaseAnimatingActivity
    {
    public:
        client::DOTA_RUNES m_nRuneType; // 0x800        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnBountyLastSpawnTimeChanged"
        float m_flLastSpawnTime; // 0x804        
        // metadata: MNetworkEnable
        float m_flNextSpawnTime; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x80c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_RuneSpawner_Bounty because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_RuneSpawner_Bounty) == 0x810);
};
