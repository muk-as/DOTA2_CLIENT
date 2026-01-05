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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            source2sdk::entity2::CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            CUtlSymbolLarge m_worldName; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            CUtlSymbolLarge m_layerName; // 0x_            
            // metadata: MNetworkEnable
            bool m_bWorldLayerVisible; // 0x_            
            // metadata: MNetworkEnable
            bool m_bEntitiesSpawned; // 0x_            
            bool m_bCreateAsChildSpawnGroup; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            std::uint32_t m_hLayerSpawnGroup; // 0x_            
            // metadata: MNotSaved
            bool m_bWorldLayerActuallyVisible; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void ShowWorldLayer; // 0x_
            // void HideWorldLayer; // 0x_
            // void SpawnEntities; // 0x_
            // void DestroyEntities; // 0x_
            // void ShowWorldLayerAndSpawnEntities; // 0x_
            // void HideWorldLayerAndDestroyEntities; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoWorldLayer because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoWorldLayer) == 0x_);
    };
};
