#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/server/CPathMoverEntitySpawn.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CFuncMover;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPathMover;
    };
};

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
        #pragma pack(push, 1)
        class CPathMoverEntitySpawner : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_szSpawnTemplates[4]; // 0x_            
            std::int32_t m_nSpawnIndex; // 0x_            
            // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> m_hPathMover;
            char m_hPathMover[0x_]; // 0x_            
            float m_flSpawnFrequencySeconds; // 0x_            
            float m_flSpawnFrequencyDistToNearestMover; // 0x_            
            // m_mapSpawnedMoverTemplates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlHashtable<CHandle<source2sdk::server::CFuncMover>,source2sdk::server::CPathMoverEntitySpawn> m_mapSpawnedMoverTemplates;
            char m_mapSpawnedMoverTemplates[0x_]; // 0x_            
            std::int32_t m_nMaxActive; // 0x_            
            source2sdk::entity2::GameTime_t m_flLastSpawnTime; // 0x_            
            
            // Datamap fields:
            // void CPathMoverEntitySpawnerSpawnThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathMoverEntitySpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathMoverEntitySpawner) == 0x_);
    };
};
