#pragma once
#include "source2sdk/client/CSurvivorsPowerUpDefinition_AreaAttack_Circle.hpp"
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
    // Size: 0x960
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CSurvivorsPowerUpDefinition_MortimerKisses : public client::CSurvivorsPowerUpDefinition_AreaAttack_Circle
    {
    public:
        // m_sArtilleryParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sArtilleryParticle;
        char m_sArtilleryParticle[0xe0]; // 0x870        
        float m_flMinRange; // 0x950        
        float m_flLaunchDistance; // 0x954        
        float m_flScepterLaunchDistance; // 0x958        
        float m_flAnglePerShot; // 0x95c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSurvivorsPowerUpDefinition_MortimerKisses because it is not a standard-layout class
    static_assert(sizeof(CSurvivorsPowerUpDefinition_MortimerKisses) == 0x960);
};