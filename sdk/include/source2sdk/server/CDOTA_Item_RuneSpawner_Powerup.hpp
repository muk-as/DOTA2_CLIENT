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
    // Size: 0x7b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flLastSpawnTime"
    // static metadata: MNetworkVarNames "float m_flNextSpawnTime"
    // static metadata: MNetworkVarNames "bool m_bNextRuneIsWater"
    // static metadata: MNetworkVarNames "bool m_bWillSpawnNextPowerRune"
    #pragma pack(push, 1)
    class CDOTA_Item_RuneSpawner_Powerup : public server::CBaseAnimatingActivity
    {
    public:
        CUtlSymbolLarge m_szPosition; // 0x798        
        // metadata: MNetworkEnable
        float m_flLastSpawnTime; // 0x7a0        
        // metadata: MNetworkEnable
        float m_flNextSpawnTime; // 0x7a4        
        // metadata: MNetworkEnable
        bool m_bNextRuneIsWater; // 0x7a8        
        // metadata: MNetworkEnable
        bool m_bWillSpawnNextPowerRune; // 0x7a9        
        [[maybe_unused]] std::uint8_t pad_0x7aa[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_RuneSpawner_Powerup because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_RuneSpawner_Powerup) == 0x7b0);
};
