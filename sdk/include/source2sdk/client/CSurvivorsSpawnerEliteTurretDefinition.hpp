#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsSpawnerDefinition.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSurvivorsSpawnerEliteTurretDefinition : public source2sdk::client::CSurvivorsSpawnerDefinition
        {
        public:
            // m_sInvulnerableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sInvulnerableParticle;
            char m_sInvulnerableParticle[0x_]; // 0x_            
            CUtlString m_sInvulnerableSkinName; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsSpawnerEliteTurretDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsSpawnerEliteTurretDefinition) == 0x_);
    };
};
