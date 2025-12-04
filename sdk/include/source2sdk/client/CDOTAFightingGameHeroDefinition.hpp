#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAFightingGameActionDefinition.hpp"
#include "source2sdk/client/CDOTAFightingGameHeroStyleDefinition.hpp"
#include "source2sdk/client/HeroID_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAFightingGameHeroDefinition
        {
        public:
            source2sdk::client::HeroID_t m_nHeroID; // 0x_            
            float m_flHeroWidth; // 0x_            
            CUtlString m_pszBasicSwingSound; // 0x_            
            CUtlString m_pszBasicHitSound; // 0x_            
            std::int32_t m_nVictoryDuration; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_pszHeroNameVO; // 0x_            
            // m_vecHeroStyles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAFightingGameHeroStyleDefinition> m_vecHeroStyles;
            char m_vecHeroStyles[0x_]; // 0x_            
            // m_vecActionDefinitions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAFightingGameActionDefinition> m_vecActionDefinitions;
            char m_vecActionDefinitions[0x_]; // 0x_            
            float m_HeroPick_HeightOffset; // 0x_            
            float m_HeroPick_XOffset_Right; // 0x_            
            float m_HeroPick_Angle_Right; // 0x_            
            float m_HeroPick_XOffset_Left; // 0x_            
            float m_HeroPick_Angle_Left; // 0x_            
            float m_HeroPick_Scale; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_nHeroID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_flHeroWidth) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_pszBasicSwingSound) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_pszBasicHitSound) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_nVictoryDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_pszHeroNameVO) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_vecHeroStyles) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_vecActionDefinitions) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_HeroPick_HeightOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_HeroPick_XOffset_Right) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_HeroPick_Angle_Right) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_HeroPick_XOffset_Left) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_HeroPick_Angle_Left) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFightingGameHeroDefinition, m_HeroPick_Scale) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAFightingGameHeroDefinition) == 0x_);
    };
};
