#pragma once
#include "source2sdk/client/CSurvivorsPowerUpDefinition.hpp"
#include "source2sdk/client/ESurvivorsAreaAttackOrigin.hpp"
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
    // Size: 0x868
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsPowerUpDefinition_AreaAttack : public client::CSurvivorsPowerUpDefinition
    {
    public:
        client::ESurvivorsAreaAttackOrigin m_eOrigin; // 0x6a0        
        float m_flRemoveParticleTimeDelay; // 0x6a4        
        // m_sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticle;
        char m_sParticle[0xe0]; // 0x6a8        
        // m_sHitImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sHitImpactParticle;
        char m_sHitImpactParticle[0xe0]; // 0x788        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUpDefinition_AreaAttack because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUpDefinition_AreaAttack) == 0x868);
};
