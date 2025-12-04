#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimatingActivity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
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
        class CDOTA_Item_RuneSpawner_Powerup : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            CUtlSymbolLarge m_szPosition; // 0x_            
            // metadata: MNetworkEnable
            float m_flLastSpawnTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flNextSpawnTime; // 0x_            
            // metadata: MNetworkEnable
            bool m_bNextRuneIsWater; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_RuneSpawner_Powerup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_RuneSpawner_Powerup) == 0x_);
    };
};
