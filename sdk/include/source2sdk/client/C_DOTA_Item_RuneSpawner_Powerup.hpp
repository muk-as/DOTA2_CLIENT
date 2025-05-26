#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/client/DOTA_RUNES.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9a8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "float m_flLastSpawnTime"
        // static metadata: MNetworkVarNames "float m_flNextSpawnTime"
        // static metadata: MNetworkVarNames "bool m_bNextRuneIsWater"
        // static metadata: MNetworkVarNames "bool m_bWillSpawnNextPowerRune"
        #pragma pack(push, 1)
        class C_DOTA_Item_RuneSpawner_Powerup : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            source2sdk::client::DOTA_RUNES m_nRuneType; // 0x998            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPowerupLastSpawnTimeChanged"
            float m_flLastSpawnTime; // 0x99c            
            // metadata: MNetworkEnable
            float m_flNextSpawnTime; // 0x9a0            
            // metadata: MNetworkEnable
            bool m_bNextRuneIsWater; // 0x9a4            
            // metadata: MNetworkEnable
            bool m_bWillSpawnNextPowerRune; // 0x9a5            
            uint8_t _pad09a6[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_RuneSpawner_Powerup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_RuneSpawner_Powerup) == 0x9a8);
    };
};
