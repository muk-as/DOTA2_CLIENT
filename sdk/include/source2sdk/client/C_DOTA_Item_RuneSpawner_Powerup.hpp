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
    // static metadata: MNetworkVarNames "bool m_bNextRuneIsWater"
    // static metadata: MNetworkVarNames "bool m_bWillSpawnNextPowerRune"
    #pragma pack(push, 1)
    class C_DOTA_Item_RuneSpawner_Powerup : public client::CBaseAnimatingActivity
    {
    public:
        client::DOTA_RUNES m_nRuneType; // 0x848        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPowerupLastSpawnTimeChanged"
        float m_flLastSpawnTime; // 0x84c        
        // metadata: MNetworkEnable
        float m_flNextSpawnTime; // 0x850        
        // metadata: MNetworkEnable
        bool m_bNextRuneIsWater; // 0x854        
        // metadata: MNetworkEnable
        bool m_bWillSpawnNextPowerRune; // 0x855        
        [[maybe_unused]] std::uint8_t pad_0x856[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_RuneSpawner_Powerup because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_RuneSpawner_Powerup) == 0x858);
};
