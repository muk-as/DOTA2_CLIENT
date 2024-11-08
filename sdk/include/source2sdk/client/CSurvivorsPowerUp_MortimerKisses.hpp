#pragma once
#include "source2sdk/client/CSurvivorsPowerUp_AreaAttack_Circle.hpp"
#include "source2sdk/client/SurvivorsParticleID_t.hpp"
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
    // Size: 0x928
    // Has VTable
    #pragma pack(push, 1)
    class CSurvivorsPowerUp_MortimerKisses : public client::CSurvivorsPowerUp_AreaAttack_Circle
    {
    public:
        // m_vecQueuedAttackTimers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecQueuedAttackTimers;
        char m_vecQueuedAttackTimers[0x18]; // 0x800        
        // m_sArtilleryParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sArtilleryParticle;
        char m_sArtilleryParticle[0xe0]; // 0x818        
        float m_flMinRange; // 0x8f8        
        float m_flLaunchDistance; // 0x8fc        
        float m_flScepterLaunchDistance; // 0x900        
        float m_flAnglePerShot; // 0x904        
        client::SurvivorsParticleID_t m_unArtilleryParticleID; // 0x908        
        [[maybe_unused]] std::uint8_t pad_0x90c[0x1c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUp_MortimerKisses because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUp_MortimerKisses) == 0x928);
};
