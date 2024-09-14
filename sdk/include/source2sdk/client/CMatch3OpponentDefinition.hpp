#pragma once
#include "source2sdk/client/CMatch3OpponentActionInstanceDefinition.hpp"
#include "source2sdk/client/CMatch3OpponentHeroItemDefinition.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/Match3OpponentID_t.hpp"
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
    // Size: 0x1a0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CMatch3OpponentDefinition
    {
    public:
        client::Match3OpponentID_t m_unOpponentID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0xc]; // 0x4
        CUtlString m_sLocName; // 0x10        
        CUtlString m_sLocFlavor; // 0x18        
        CUtlString m_sUnitName; // 0x20        
        CUtlString m_sModelName; // 0x28        
        client::HeroID_t m_nHeroID; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0x4]; // 0x34
        // m_vecHeroItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CMatch3OpponentHeroItemDefinition> m_vecHeroItems;
        char m_vecHeroItems[0x18]; // 0x38        
        int32_t m_nHeroPrimarySlotIndex; // 0x50        
        int32_t m_nHeroModelIndex; // 0x54        
        int32_t m_nHeroSkinOverride; // 0x58        
        Vector m_vModelOffset; // 0x5c        
        float m_flModelScale; // 0x68        
        float m_flMaxHealth; // 0x6c        
        // m_sAttackParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sAttackParticleEffect;
        char m_sAttackParticleEffect[0xe0]; // 0x70        
        CUtlString m_sAttackImpactSound; // 0x150        
        // m_vecIntroActions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CMatch3OpponentActionInstanceDefinition> m_vecIntroActions;
        char m_vecIntroActions[0x18]; // 0x158        
        // m_vecRepeatingActions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CMatch3OpponentActionInstanceDefinition> m_vecRepeatingActions;
        char m_vecRepeatingActions[0x18]; // 0x170        
        // m_vecOutroActions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CMatch3OpponentActionInstanceDefinition> m_vecOutroActions;
        char m_vecOutroActions[0x18]; // 0x188        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CMatch3OpponentDefinition, m_unOpponentID) == 0x0);
    static_assert(offsetof(CMatch3OpponentDefinition, m_sLocName) == 0x10);
    static_assert(offsetof(CMatch3OpponentDefinition, m_sLocFlavor) == 0x18);
    static_assert(offsetof(CMatch3OpponentDefinition, m_sUnitName) == 0x20);
    static_assert(offsetof(CMatch3OpponentDefinition, m_sModelName) == 0x28);
    static_assert(offsetof(CMatch3OpponentDefinition, m_nHeroID) == 0x30);
    static_assert(offsetof(CMatch3OpponentDefinition, m_vecHeroItems) == 0x38);
    static_assert(offsetof(CMatch3OpponentDefinition, m_nHeroPrimarySlotIndex) == 0x50);
    static_assert(offsetof(CMatch3OpponentDefinition, m_nHeroModelIndex) == 0x54);
    static_assert(offsetof(CMatch3OpponentDefinition, m_nHeroSkinOverride) == 0x58);
    static_assert(offsetof(CMatch3OpponentDefinition, m_vModelOffset) == 0x5c);
    static_assert(offsetof(CMatch3OpponentDefinition, m_flModelScale) == 0x68);
    static_assert(offsetof(CMatch3OpponentDefinition, m_flMaxHealth) == 0x6c);
    static_assert(offsetof(CMatch3OpponentDefinition, m_sAttackParticleEffect) == 0x70);
    static_assert(offsetof(CMatch3OpponentDefinition, m_sAttackImpactSound) == 0x150);
    static_assert(offsetof(CMatch3OpponentDefinition, m_vecIntroActions) == 0x158);
    static_assert(offsetof(CMatch3OpponentDefinition, m_vecRepeatingActions) == 0x170);
    static_assert(offsetof(CMatch3OpponentDefinition, m_vecOutroActions) == 0x188);
    
    static_assert(sizeof(CMatch3OpponentDefinition) == 0x1a0);
};
