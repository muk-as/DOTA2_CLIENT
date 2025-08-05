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
        // Size: 0x818
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "float m_flLastSpawnTime"
        // static metadata: MNetworkVarNames "float m_flNextSpawnTime"
        #pragma pack(push, 1)
        class CDOTA_Item_RuneSpawner_Bounty : public source2sdk::server::CBaseAnimatingActivity
        {
        public:
            CUtlSymbolLarge m_szPosition; // 0x800            
            std::int32_t m_nDotaTeam; // 0x808            
            // metadata: MNetworkEnable
            float m_flLastSpawnTime; // 0x80c            
            // metadata: MNetworkEnable
            float m_flNextSpawnTime; // 0x810            
            uint8_t _pad0814[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_RuneSpawner_Bounty because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_RuneSpawner_Bounty) == 0x818);
    };
};
