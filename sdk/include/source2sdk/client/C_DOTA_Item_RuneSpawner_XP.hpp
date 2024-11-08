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
    // Size: 0x858
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "float m_flLastSpawnTime"
    // static metadata: MNetworkVarNames "float m_flNextSpawnTime"
    #pragma pack(push, 1)
    class C_DOTA_Item_RuneSpawner_XP : public client::CBaseAnimatingActivity
    {
    public:
        client::DOTA_RUNES m_nRuneType; // 0x848        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnXPLastSpawnTimeChanged"
        float m_flLastSpawnTime; // 0x84c        
        // metadata: MNetworkEnable
        float m_flNextSpawnTime; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x854[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_RuneSpawner_XP because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_RuneSpawner_XP) == 0x858);
};
