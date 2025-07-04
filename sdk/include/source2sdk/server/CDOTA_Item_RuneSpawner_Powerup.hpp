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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x7f0
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
            CUtlSymbolLarge m_szPosition; // 0x7d8            
            // metadata: MNetworkEnable
            float m_flLastSpawnTime; // 0x7e0            
            // metadata: MNetworkEnable
            float m_flNextSpawnTime; // 0x7e4            
            // metadata: MNetworkEnable
            bool m_bNextRuneIsWater; // 0x7e8            
            uint8_t _pad07e9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_RuneSpawner_Powerup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_RuneSpawner_Powerup) == 0x7f0);
    };
};
