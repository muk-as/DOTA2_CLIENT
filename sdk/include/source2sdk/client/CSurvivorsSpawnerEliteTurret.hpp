#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsSpawner.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x268
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsSpawnerEliteTurret : public source2sdk::client::CSurvivorsSpawner
        {
        public:
            std::int32_t m_nRoomIndex; // 0x178            
            std::int32_t m_nEnemiesSpawnedCount; // 0x17c            
            // m_sInvulnerableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sInvulnerableParticle;
            char m_sInvulnerableParticle[0xe0]; // 0x180            
            CUtlString m_sInvulnerableSkinName; // 0x260            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsSpawnerEliteTurret because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsSpawnerEliteTurret) == 0x268);
    };
};
