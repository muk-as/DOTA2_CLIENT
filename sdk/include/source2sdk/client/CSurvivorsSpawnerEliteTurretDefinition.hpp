#pragma once
#include "source2sdk/client/CSurvivorsSpawnerDefinition.hpp"
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
    // Size: 0x230
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsSpawnerEliteTurretDefinition : public client::CSurvivorsSpawnerDefinition
    {
    public:
        // m_sInvulnerableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sInvulnerableParticle;
        char m_sInvulnerableParticle[0xe0]; // 0x148        
        CUtlString m_sInvulnerableSkinName; // 0x228        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsSpawnerEliteTurretDefinition because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsSpawnerEliteTurretDefinition) == 0x230);
};
