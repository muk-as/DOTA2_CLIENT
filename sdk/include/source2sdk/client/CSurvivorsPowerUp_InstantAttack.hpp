#pragma once
#include "source2sdk/client/CSurvivorsPowerUp.hpp"
#include "source2sdk/client/ESurvivorsAttackTargeting.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6f0
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsPowerUp_InstantAttack : public client::CSurvivorsPowerUp
    {
    public:
        // m_sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticle;
        char m_sParticle[0xe0]; // 0x608        
        client::ESurvivorsAttackTargeting m_eTargeting; // 0x6e8        
        [[maybe_unused]] std::uint8_t pad_0x6ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUp_InstantAttack because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUp_InstantAttack) == 0x6f0);
};
