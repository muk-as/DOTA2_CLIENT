#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsAttributeValue.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/SurvivorsHeroID_t.hpp"
#include "source2sdk/client/SurvivorsPowerUpID_t.hpp"
#include "source2sdk/client/item_definition_index_t.hpp"
#include "source2sdk/client/style_index_t.hpp"

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
        class CSurvivorsHeroDefinition
        {
        public:
            source2sdk::client::SurvivorsHeroID_t m_unHeroID; // 0x_            
            source2sdk::client::HeroID_t m_nDOTAHeroID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flBaseHealth; // 0x_            
            float m_flBaseSpeed; // 0x_            
            float m_flBasePickupRadius; // 0x_            
            float m_flBaseDashSpeed; // 0x_            
            float m_flBaseDashDuration; // 0x_            
            float m_flBaseDashCooldown; // 0x_            
            std::int32_t m_nBaseNumDashes; // 0x_            
            float m_flMass; // 0x_            
            float m_flCollisionRadius; // 0x_            
            float m_flCollisionHeight; // 0x_            
            float m_flTriggerCollisionRadiusPadding; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_pszPlayerHitSoundEvent; // 0x_            
            CUtlString m_sLocDisplayName; // 0x_            
            // m_vecEconItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::item_definition_index_t> m_vecEconItems;
            char m_vecEconItems[0x_]; // 0x_            
            source2sdk::client::style_index_t m_unStyleIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecBaseAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsAttributeValue> m_vecBaseAttributes;
            char m_vecBaseAttributes[0x_]; // 0x_            
            // m_vecStartingPowerUps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsPowerUpID_t> m_vecStartingPowerUps;
            char m_vecStartingPowerUps[0x_]; // 0x_            
            // m_vecInnatePowerUps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SurvivorsPowerUpID_t> m_vecInnatePowerUps;
            char m_vecInnatePowerUps[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_unHeroID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_nDOTAHeroID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flBaseHealth) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flBaseSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flBasePickupRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flBaseDashSpeed) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flBaseDashDuration) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flBaseDashCooldown) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_nBaseNumDashes) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flMass) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flCollisionRadius) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flCollisionHeight) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_flTriggerCollisionRadiusPadding) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_pszPlayerHitSoundEvent) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_sLocDisplayName) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_vecEconItems) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_unStyleIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_vecBaseAttributes) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_vecStartingPowerUps) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsHeroDefinition, m_vecInnatePowerUps) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsHeroDefinition) == 0x_);
    };
};
