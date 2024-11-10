#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x520
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "string_t m_worldName"
    // static metadata: MNetworkVarNames "string_t m_layerName"
    // static metadata: MNetworkVarNames "bool m_bWorldLayerVisible"
    // static metadata: MNetworkVarNames "bool m_bEntitiesSpawned"
    #pragma pack(push, 1)
    class CInfoWorldLayer : public server::CBaseEntity
    {
    public:
        entity2::CEntityIOOutput m_pOutputOnEntitiesSpawned; // 0x4e0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_worldName; // 0x508        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_layerName; // 0x510        
        // metadata: MNetworkEnable
        bool m_bWorldLayerVisible; // 0x518        
        // metadata: MNetworkEnable
        bool m_bEntitiesSpawned; // 0x519        
        bool m_bCreateAsChildSpawnGroup; // 0x51a        
        [[maybe_unused]] std::uint8_t pad_0x51b[0x1]; // 0x51b
        uint32_t m_hLayerSpawnGroup; // 0x51c        
        
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
    static_assert(sizeof(CInfoWorldLayer) == 0x520);
};
