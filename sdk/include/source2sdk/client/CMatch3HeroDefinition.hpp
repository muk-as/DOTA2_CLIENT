#pragma once
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Standard-layout class: true
    // Size: 0x1e0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CMatch3HeroDefinition
    {
    public:
        client::HeroID_t m_nHeroID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0xc]; // 0x4
        // m_sPieceModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sPieceModel;
        char m_sPieceModel[0xe0]; // 0x10        
        // m_sAttackParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sAttackParticleEffect;
        char m_sAttackParticleEffect[0xe0]; // 0xf0        
        CUtlString m_sSuperAbility; // 0x1d0        
        CUtlString m_sUltraAbility; // 0x1d8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMatch3HeroDefinition, m_nHeroID) == 0x0);
    static_assert(offsetof(CMatch3HeroDefinition, m_sPieceModel) == 0x10);
    static_assert(offsetof(CMatch3HeroDefinition, m_sAttackParticleEffect) == 0xf0);
    static_assert(offsetof(CMatch3HeroDefinition, m_sSuperAbility) == 0x1d0);
    static_assert(offsetof(CMatch3HeroDefinition, m_sUltraAbility) == 0x1d8);
    
    static_assert(sizeof(CMatch3HeroDefinition) == 0x1e0);
};
