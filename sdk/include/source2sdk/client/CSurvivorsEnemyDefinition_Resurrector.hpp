#pragma once
#include "source2sdk/client/CSurvivorsEnemyDefinition.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x370
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsEnemyDefinition_Resurrector : public client::CSurvivorsEnemyDefinition
    {
    public:
        int32_t m_nNumResurrectionTimes; // 0x288        
        float m_flMovementSpeedMultiplierPerDeath; // 0x28c        
        // m_sResurrectParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sResurrectParticleName;
        char m_sResurrectParticleName[0xe0]; // 0x290        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsEnemyDefinition_Resurrector because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsEnemyDefinition_Resurrector) == 0x370);
};
