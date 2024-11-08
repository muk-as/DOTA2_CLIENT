#pragma once
#include "source2sdk/client/CSurvivorsPowerUp.hpp"
#include "source2sdk/client/SurvivorsParticleID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    class CNewParticleEffect;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x728
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsPowerUp_Stampede : public client::CSurvivorsPowerUp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x608[0x30]; // 0x608
        // m_sParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sParticle;
        char m_sParticle[0xe0]; // 0x638        
        client::SurvivorsParticleID_t m_unParticleID; // 0x718        
        [[maybe_unused]] std::uint8_t pad_0x71c[0x4]; // 0x71c
        particleslib::CNewParticleEffect* m_pParticle; // 0x720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUp_Stampede because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUp_Stampede) == 0x728);
};
