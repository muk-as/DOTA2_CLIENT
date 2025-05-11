#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUp.hpp"
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
        // Size: 0x808
        // Has VTable
        #pragma pack(push, 1)
        class CSurvivorsPowerUp_LandMine : public source2sdk::client::CSurvivorsPowerUp
        {
        public:
            // m_sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticle;
            char m_sParticle[0xe0]; // 0x608            
            // m_sExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sExplosionParticle;
            char m_sExplosionParticle[0xe0]; // 0x6e8            
            uint8_t _pad07c8[0x18]; // 0x7c8
            float m_flScepterVacuumRadius; // 0x7e0            
            float m_flScepterVacuumDistance; // 0x7e4            
            uint8_t _pad07e8[0x18]; // 0x7e8
            std::int32_t m_nMineTypeIndex; // 0x800            
            uint8_t _pad0804[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUp_LandMine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUp_LandMine) == 0x808);
    };
};
