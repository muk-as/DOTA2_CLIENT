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
        class CSurvivorsEnemyDefinition_Resurrector : public source2sdk::client::CSurvivorsEnemyDefinition
        {
        public:
            std::int32_t m_nNumResurrectionTimes; // 0x_            
            float m_flMovementSpeedMultiplierPerDeath; // 0x_            
            // m_sResurrectParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sResurrectParticleName;
            char m_sResurrectParticleName[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsEnemyDefinition_Resurrector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsEnemyDefinition_Resurrector) == 0x_);
    };
};
