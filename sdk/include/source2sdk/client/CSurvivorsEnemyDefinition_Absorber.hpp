#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsEnemyDefinition.hpp"
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
        class CSurvivorsEnemyDefinition_Absorber : public source2sdk::client::CSurvivorsEnemyDefinition
        {
        public:
            float m_flModelScaleIncreasePerAbsorb; // 0x_            
            float m_flMaxModelScale; // 0x_            
            float m_flAbsorbRadius; // 0x_            
            float m_flPercentHealthAbsorbed; // 0x_            
            // m_sAbsorbParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sAbsorbParticleName;
            char m_sAbsorbParticleName[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsEnemyDefinition_Absorber because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsEnemyDefinition_Absorber) == 0x_);
    };
};
