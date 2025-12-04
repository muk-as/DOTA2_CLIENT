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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "float m_flLastSpawnTime"
        // static metadata: MNetworkVarNames "float m_flNextSpawnTime"
        // static metadata: MNetworkVarNames "bool m_bNextRuneIsWater"
        #pragma pack(push, 1)
        class C_DOTA_Item_RuneSpawner_Powerup : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            source2sdk::client::DOTA_RUNES m_nRuneType; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnPowerupLastSpawnTimeChanged"
            float m_flLastSpawnTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flNextSpawnTime; // 0x_            
            // metadata: MNetworkEnable
            bool m_bNextRuneIsWater; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_RuneSpawner_Powerup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_RuneSpawner_Powerup) == 0x_);
    };
};
