#pragma once
#include "source2sdk/client/CDOTAFightingGameActionDefinition.hpp"
#include "source2sdk/client/CDOTAFightingGameHeroStyleDefinition.hpp"
#include "source2sdk/client/HeroID_t.hpp"
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
    // Size: 0x70
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAFightingGameHeroDefinition
    {
    public:
        client::HeroID_t m_nHeroID; // 0x0        
        float m_flHeroWidth; // 0x4        
        CUtlString m_pszBasicSwingSound; // 0x8        
        CUtlString m_pszBasicHitSound; // 0x10        
        int32_t m_nVictoryDuration; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        CUtlString m_pszHeroNameVO; // 0x20        
        // m_vecHeroStyles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAFightingGameHeroStyleDefinition> m_vecHeroStyles;
        char m_vecHeroStyles[0x18]; // 0x28        
        // m_vecActionDefinitions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAFightingGameActionDefinition> m_vecActionDefinitions;
        char m_vecActionDefinitions[0x18]; // 0x40        
        float m_HeroPick_HeightOffset; // 0x58        
        float m_HeroPick_XOffset_Right; // 0x5c        
        float m_HeroPick_Angle_Right; // 0x60        
        float m_HeroPick_XOffset_Left; // 0x64        
        float m_HeroPick_Angle_Left; // 0x68        
        float m_HeroPick_Scale; // 0x6c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_nHeroID) == 0x0);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_flHeroWidth) == 0x4);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_pszBasicSwingSound) == 0x8);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_pszBasicHitSound) == 0x10);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_nVictoryDuration) == 0x18);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_pszHeroNameVO) == 0x20);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_vecHeroStyles) == 0x28);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_vecActionDefinitions) == 0x40);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_HeroPick_HeightOffset) == 0x58);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_HeroPick_XOffset_Right) == 0x5c);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_HeroPick_Angle_Right) == 0x60);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_HeroPick_XOffset_Left) == 0x64);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_HeroPick_Angle_Left) == 0x68);
    static_assert(offsetof(CDOTAFightingGameHeroDefinition, m_HeroPick_Scale) == 0x6c);
    
    static_assert(sizeof(CDOTAFightingGameHeroDefinition) == 0x70);
};
