#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUpDefinition.hpp"
#include "source2sdk/client/ESurvivorsAreaAttackOrigin.hpp"
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
        class CSurvivorsPowerUpDefinition_AreaAttack : public source2sdk::client::CSurvivorsPowerUpDefinition
        {
        public:
            source2sdk::client::ESurvivorsAreaAttackOrigin m_eOrigin; // 0x_            
            float m_flRemoveParticleTimeDelay; // 0x_            
            // m_sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticle;
            char m_sParticle[0x_]; // 0x_            
            // m_sHitImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sHitImpactParticle;
            char m_sHitImpactParticle[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSurvivorsPowerUpDefinition_AreaAttack because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPowerUpDefinition_AreaAttack) == 0x_);
    };
};
