#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CMatch3OpponentActionInstanceDefinition.hpp"
#include "source2sdk/client/CMatch3OpponentHeroItemDefinition.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/Match3OpponentID_t.hpp"
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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CMatch3OpponentDefinition
        {
        public:
            source2sdk::client::Match3OpponentID_t m_unOpponentID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sLocName; // 0x_            
            CUtlString m_sLocFlavor; // 0x_            
            CUtlString m_sUnitName; // 0x_            
            CUtlString m_sModelName; // 0x_            
            source2sdk::client::HeroID_t m_nHeroID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecHeroItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMatch3OpponentHeroItemDefinition> m_vecHeroItems;
            char m_vecHeroItems[0x_]; // 0x_            
            std::int32_t m_nHeroPrimarySlotIndex; // 0x_            
            std::int32_t m_nHeroModelIndex; // 0x_            
            std::int32_t m_nHeroSkinOverride; // 0x_            
            Vector m_vModelOffset; // 0x_            
            float m_flModelScale; // 0x_            
            float m_flMaxHealth; // 0x_            
            // m_sAttackParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_sAttackParticleEffect;
            char m_sAttackParticleEffect[0x_]; // 0x_            
            CUtlString m_sAttackImpactSound; // 0x_            
            // m_vecIntroActions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMatch3OpponentActionInstanceDefinition> m_vecIntroActions;
            char m_vecIntroActions[0x_]; // 0x_            
            // m_vecRepeatingActions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMatch3OpponentActionInstanceDefinition> m_vecRepeatingActions;
            char m_vecRepeatingActions[0x_]; // 0x_            
            // m_vecOutroActions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CMatch3OpponentActionInstanceDefinition> m_vecOutroActions;
            char m_vecOutroActions[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_unOpponentID) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_sLocName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_sLocFlavor) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_sUnitName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_sModelName) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_nHeroID) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_vecHeroItems) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_nHeroPrimarySlotIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_nHeroModelIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_nHeroSkinOverride) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_vModelOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_flModelScale) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_flMaxHealth) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_sAttackParticleEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_sAttackImpactSound) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_vecIntroActions) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_vecRepeatingActions) == 0x_);
        static_assert(offsetof(source2sdk::client::CMatch3OpponentDefinition, m_vecOutroActions) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CMatch3OpponentDefinition) == 0x_);
    };
};
