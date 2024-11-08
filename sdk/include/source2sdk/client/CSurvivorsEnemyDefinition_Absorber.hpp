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
    // Size: 0x378
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsEnemyDefinition_Absorber : public client::CSurvivorsEnemyDefinition
    {
    public:
        float m_flModelScaleIncreasePerAbsorb; // 0x288        
        float m_flMaxModelScale; // 0x28c        
        float m_flAbsorbRadius; // 0x290        
        float m_flPercentHealthAbsorbed; // 0x294        
        // m_sAbsorbParticleName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sAbsorbParticleName;
        char m_sAbsorbParticleName[0xe0]; // 0x298        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsEnemyDefinition_Absorber because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsEnemyDefinition_Absorber) == 0x378);
};
