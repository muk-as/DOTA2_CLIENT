#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

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
        // Size: 0x630
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "string_t m_worldName"
        // static metadata: MNetworkVarNames "string_t m_layerName"
        // static metadata: MNetworkVarNames "bool m_bWorldLayerVisible"
        // static metadata: MNetworkVarNames "bool m_bEntitiesSpawned"
        #pragma pack(push, 1)
        class CInfoWorldLayer : public source2sdk::client::C_BaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x5e8            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_worldName; // 0x610            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_layerName; // 0x618            
            // metadata: MNetworkEnable
            bool m_bWorldLayerVisible; // 0x620            
            // metadata: MNetworkEnable
            bool m_bEntitiesSpawned; // 0x621            
            bool m_bCreateAsChildSpawnGroup; // 0x622            
            uint8_t _pad0623[0x1]; // 0x623
            std::uint32_t m_hLayerSpawnGroup; // 0x624            
            bool m_bWorldLayerActuallyVisible; // 0x628            
            uint8_t _pad0629[0x7];
            
            // Datamap fields:
            // void ShowWorldLayer; // 0x0
            // void HideWorldLayer; // 0x0
            // void SpawnEntities; // 0x0
            // void DestroyEntities; // 0x0
            // void ShowWorldLayerAndSpawnEntities; // 0x0
            // void HideWorldLayerAndDestroyEntities; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoWorldLayer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoWorldLayer) == 0x630);
    };
};
