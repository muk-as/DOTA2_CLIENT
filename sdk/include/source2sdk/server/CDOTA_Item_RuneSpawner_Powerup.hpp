#pragma once
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
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
    // Size: 0x7d8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "float m_flLastSpawnTime"
    // static metadata: MNetworkVarNames "float m_flNextSpawnTime"
    // static metadata: MNetworkVarNames "bool m_bNextRuneIsWater"
    // static metadata: MNetworkVarNames "bool m_bWillSpawnNextPowerRune"
    #pragma pack(push, 1)
    class CDOTA_Item_RuneSpawner_Powerup : public server::CBaseAnimatingActivity
    {
    public:
        CUtlSymbolLarge m_szPosition; // 0x7c0        
        // metadata: MNetworkEnable
        float m_flLastSpawnTime; // 0x7c8        
        // metadata: MNetworkEnable
        float m_flNextSpawnTime; // 0x7cc        
        // metadata: MNetworkEnable
        bool m_bNextRuneIsWater; // 0x7d0        
        // metadata: MNetworkEnable
        bool m_bWillSpawnNextPowerRune; // 0x7d1        
        [[maybe_unused]] std::uint8_t pad_0x7d2[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_RuneSpawner_Powerup because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_RuneSpawner_Powerup) == 0x7d8);
};
